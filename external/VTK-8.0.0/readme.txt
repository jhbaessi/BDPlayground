VTK QT Build Setting.

1. VTK 8.0 �ٿ�ε� (http://www.vtk.org/download/) �� C:/VTK/VTK-8.0.0_Src ������ ���� ����

2. CMake 3.7.0 ��ġ (http://www.cmake.org/download/)

3. CMake �� �̿��� Cross Compile ����

3.1. source ��ο� C:/VTK/VTK-8.0.0_Src ����,
 binaries ��ο� C:/VTK/VTK-8.0.0_CMake_x64 �� �����Ѵ�.
 �����ϸ� CMake �� �ϳ� �� �����ؼ� C:/VTK/VTK-8.0.0_CMake_Win32 �� �����Ѵ�.
 Congifure Ŭ�� �� VS2015_x64 �Ǵ� VS2015 �� ����.

3.2 Add Entry �� ������ Type �� PATH �� ����, Name �� CMAKE_PREFIX_PATH �� ����,
 Value �� C:/Qt/5.6.0/msvc2015_64 ��θ� ����.
 (���� Win32 �� �����ؾ� �Ѵٸ� C:/Qt/5.6.0/msvc2015 ��θ� ����)

3.3 �Ʒ��� ���� CMake �� ����

BUILD_SHARED_LIBS üũ ���� (���� DLL ������ �����ϰ� ������ üũ)
Module_vtkGUISupportQt üũ
Module_vtkGUISupportQtOpenGL üũ
Module_vtkViewsQt üũ
VTK_DEBUG_LEAKS üũ
VTK_Group_Qt üũ

(vtkShader2.h �� ����ϰ� �ʹٸ� VTK_RENDERING_BACKEND �� OpenGL2 ���� OpenGL �� ����)


3.4 Configure ��ư Ŭ��

3.5 VTK_QT_VERSION �� 4 ���� 5�� �����ϰ� Configure ��ư Ŭ��,
 ���� �κ��� ���������� �ٽ� Configure ��ư Ŭ��.

3.6 Generate ��ư Ŭ��.

4. Visual Studio �� �̿��� ���̺귯�� ����

4.1 (3.1) �� binaries ��ο� ������ VTK.sln �ַ���� Open (������ ���� �ʿ�)

4.2 Debug, Release ���� ���� ALL_BUILD ������Ʈ�� ����, INSTALL ������Ʈ�� ����.
 INSTALL ���尡 �Ϸ�Ǹ� C:/Program Files/VTK �Ǵ� C:/Program Files (x86)/VTK ������
 �����Ǵ� ������� ���� ����.





VTK ����� ���� ���丮 ��� ����

$(SolutionDir)Ext_Lib\VTK-8.0.0\Include\$(PlatformName)
$(SolutionDir)Ext_Lib\VTK-8.0.0\lib\$(PlatformName)\$(ConfigurationName)





stdafx.h ��� lib �� ���� 

#pragma comment( lib, "vtkalglib-8.0.lib")
#pragma comment( lib, "vtkChartsCore-8.0.lib")
#pragma comment( lib, "vtkCommonColor-8.0.lib")
#pragma comment( lib, "vtkCommonComputationalGeometry-8.0.lib")
#pragma comment( lib, "vtkCommonCore-8.0.lib")
#pragma comment( lib, "vtkCommonDataModel-8.0.lib")
#pragma comment( lib, "vtkCommonExecutionModel-8.0.lib")
#pragma comment( lib, "vtkCommonMath-8.0.lib")
#pragma comment( lib, "vtkCommonMisc-8.0.lib")
#pragma comment( lib, "vtkCommonSystem-8.0.lib")
#pragma comment( lib, "vtkCommonTransforms-8.0.lib")
#pragma comment( lib, "vtkDICOMParser-8.0.lib")
#pragma comment( lib, "vtkDomainsChemistry-8.0.lib")
#pragma comment( lib, "vtkDomainsChemistryOpenGL2-8.0.lib")
#pragma comment( lib, "vtkexoIIc-8.0.lib")
#pragma comment( lib, "vtkexpat-8.0.lib")
#pragma comment( lib, "vtkFiltersAMR-8.0.lib")
#pragma comment( lib, "vtkFiltersCore-8.0.lib")
#pragma comment( lib, "vtkFiltersExtraction-8.0.lib")
#pragma comment( lib, "vtkFiltersFlowPaths-8.0.lib")
#pragma comment( lib, "vtkFiltersGeneral-8.0.lib")
#pragma comment( lib, "vtkFiltersGeneric-8.0.lib")
#pragma comment( lib, "vtkFiltersGeometry-8.0.lib")
#pragma comment( lib, "vtkFiltersHybrid-8.0.lib")
#pragma comment( lib, "vtkFiltersHyperTree-8.0.lib")
#pragma comment( lib, "vtkFiltersImaging-8.0.lib")
#pragma comment( lib, "vtkFiltersModeling-8.0.lib")
#pragma comment( lib, "vtkFiltersParallel-8.0.lib")
#pragma comment( lib, "vtkFiltersParallelImaging-8.0.lib")
#pragma comment( lib, "vtkFiltersPoints-8.0.lib")
#pragma comment( lib, "vtkFiltersProgrammable-8.0.lib")
#pragma comment( lib, "vtkFiltersSelection-8.0.lib")
#pragma comment( lib, "vtkFiltersSMP-8.0.lib")
#pragma comment( lib, "vtkFiltersSources-8.0.lib")
#pragma comment( lib, "vtkFiltersStatistics-8.0.lib")
#pragma comment( lib, "vtkFiltersTexture-8.0.lib")
#pragma comment( lib, "vtkFiltersTopology-8.0.lib")
#pragma comment( lib, "vtkFiltersVerdict-8.0.lib")
#pragma comment( lib, "vtkfreetype-8.0.lib")
#pragma comment( lib, "vtkGeovisCore-8.0.lib")
#pragma comment( lib, "vtkgl2ps-8.0.lib")
#pragma comment( lib, "vtkglew-8.0.lib")
#pragma comment( lib, "vtkGUISupportQt-8.0.lib")
#pragma comment( lib, "vtkGUISupportQtOpenGL-8.0.lib")
#pragma comment( lib, "vtkGUISupportQtSQL-8.0.lib")
#pragma comment( lib, "vtkhdf5_hl-8.0.lib")
#pragma comment( lib, "vtkhdf5-8.0.lib")
#pragma comment( lib, "vtkImagingColor-8.0.lib")
#pragma comment( lib, "vtkImagingCore-8.0.lib")
#pragma comment( lib, "vtkImagingFourier-8.0.lib")
#pragma comment( lib, "vtkImagingGeneral-8.0.lib")
#pragma comment( lib, "vtkImagingHybrid-8.0.lib")
#pragma comment( lib, "vtkImagingMath-8.0.lib")
#pragma comment( lib, "vtkImagingMorphological-8.0.lib")
#pragma comment( lib, "vtkImagingSources-8.0.lib")
#pragma comment( lib, "vtkImagingStatistics-8.0.lib")
#pragma comment( lib, "vtkImagingStencil-8.0.lib")
#pragma comment( lib, "vtkInfovisCore-8.0.lib")
#pragma comment( lib, "vtkInfovisLayout-8.0.lib")
#pragma comment( lib, "vtkInteractionImage-8.0.lib")
#pragma comment( lib, "vtkInteractionStyle-8.0.lib")
#pragma comment( lib, "vtkInteractionWidgets-8.0.lib")
#pragma comment( lib, "vtkIOAMR-8.0.lib")
#pragma comment( lib, "vtkIOCore-8.0.lib")
#pragma comment( lib, "vtkIOEnSight-8.0.lib")
#pragma comment( lib, "vtkIOExodus-8.0.lib")
#pragma comment( lib, "vtkIOExport-8.0.lib")
#pragma comment( lib, "vtkIOExportOpenGL2-8.0.lib")
#pragma comment( lib, "vtkIOGeometry-8.0.lib")
#pragma comment( lib, "vtkIOImage-8.0.lib")
#pragma comment( lib, "vtkIOImport-8.0.lib")
#pragma comment( lib, "vtkIOInfovis-8.0.lib")
#pragma comment( lib, "vtkIOLegacy-8.0.lib")
#pragma comment( lib, "vtkIOLSDyna-8.0.lib")
#pragma comment( lib, "vtkIOMINC-8.0.lib")
#pragma comment( lib, "vtkIOMovie-8.0.lib")
#pragma comment( lib, "vtkIONetCDF-8.0.lib")
#pragma comment( lib, "vtkIOParallel-8.0.lib")
#pragma comment( lib, "vtkIOParallelXML-8.0.lib")
#pragma comment( lib, "vtkIOPLY-8.0.lib")
#pragma comment( lib, "vtkIOSQL-8.0.lib")
#pragma comment( lib, "vtkIOTecplotTable-8.0.lib")
#pragma comment( lib, "vtkIOVideo-8.0.lib")
#pragma comment( lib, "vtkIOXML-8.0.lib")
#pragma comment( lib, "vtkIOXMLParser-8.0.lib")
#pragma comment( lib, "vtkjpeg-8.0.lib")
#pragma comment( lib, "vtkjsoncpp-8.0.lib")
#pragma comment( lib, "vtklibharu-8.0.lib")
#pragma comment( lib, "vtklibxml2-8.0.lib")
#pragma comment( lib, "vtklz4-8.0.lib")
#pragma comment( lib, "vtkmetaio-8.0.lib")
#pragma comment( lib, "vtknetcdf_c++.lib")
#pragma comment( lib, "vtkNetCDF-8.0.lib")
#pragma comment( lib, "vtkoggtheora-8.0.lib")
#pragma comment( lib, "vtkParallelCore-8.0.lib")
#pragma comment( lib, "vtkpng-8.0.lib")
#pragma comment( lib, "vtkproj4-8.0.lib")
#pragma comment( lib, "vtkRenderingAnnotation-8.0.lib")
#pragma comment( lib, "vtkRenderingContext2D-8.0.lib")
#pragma comment( lib, "vtkRenderingContextOpenGL2-8.0.lib")
#pragma comment( lib, "vtkRenderingCore-8.0.lib")
#pragma comment( lib, "vtkRenderingFreeType-8.0.lib")
#pragma comment( lib, "vtkRenderingGL2PSOpenGL2-8.0.lib")
#pragma comment( lib, "vtkRenderingImage-8.0.lib")
#pragma comment( lib, "vtkRenderingLabel-8.0.lib")
#pragma comment( lib, "vtkRenderingLOD-8.0.lib")
#pragma comment( lib, "vtkRenderingOpenGL2-8.0.lib")
#pragma comment( lib, "vtkRenderingQt-8.0.lib")
#pragma comment( lib, "vtkRenderingVolume-8.0.lib")
#pragma comment( lib, "vtkRenderingVolumeOpenGL2-8.0.lib")
#pragma comment( lib, "vtksqlite-8.0.lib")
#pragma comment( lib, "vtksys-8.0.lib")
#pragma comment( lib, "vtktiff-8.0.lib")
#pragma comment( lib, "vtkverdict-8.0.lib")
#pragma comment( lib, "vtkViewsContext2D-8.0.lib")
#pragma comment( lib, "vtkViewsCore-8.0.lib")
#pragma comment( lib, "vtkViewsInfovis-8.0.lib")
#pragma comment( lib, "vtkViewsQt-8.0.lib")
#pragma comment( lib, "vtkzlib-8.0.lib")