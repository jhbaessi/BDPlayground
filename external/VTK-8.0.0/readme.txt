VTK QT Build Setting.

1. VTK 8.0 다운로드 (http://www.vtk.org/download/) 후 C:/VTK/VTK-8.0.0_Src 폴더에 압축 해제

2. CMake 3.7.0 설치 (http://www.cmake.org/download/)

3. CMake 를 이용한 Cross Compile 진행

3.1. source 경로에 C:/VTK/VTK-8.0.0_Src 설정,
 binaries 경로에 C:/VTK/VTK-8.0.0_CMake_x64 를 설정한다.
 가능하면 CMake 를 하나 더 실행해서 C:/VTK/VTK-8.0.0_CMake_Win32 도 설정한다.
 Congifure 클릭 후 VS2015_x64 또는 VS2015 를 선택.

3.2 Add Entry 를 누르고 Type 을 PATH 로 설정, Name 을 CMAKE_PREFIX_PATH 로 설정,
 Value 에 C:/Qt/5.6.0/msvc2015_64 경로를 지정.
 (만약 Win32 로 빌드해야 한다면 C:/Qt/5.6.0/msvc2015 경로를 지정)

3.3 아래와 같이 CMake 를 셋팅

BUILD_SHARED_LIBS 체크 해제 (만약 DLL 파일을 생성하고 싶으면 체크)
Module_vtkGUISupportQt 체크
Module_vtkGUISupportQtOpenGL 체크
Module_vtkViewsQt 체크
VTK_DEBUG_LEAKS 체크
VTK_Group_Qt 체크

(vtkShader2.h 를 사용하고 싶다면 VTK_RENDERING_BACKEND 를 OpenGL2 에서 OpenGL 로 변경)


3.4 Configure 버튼 클릭

3.5 VTK_QT_VERSION 을 4 에서 5로 변경하고 Configure 버튼 클릭,
 빨간 부분이 남아있으면 다시 Configure 버튼 클릭.

3.6 Generate 버튼 클릭.

4. Visual Studio 를 이용한 라이브러리 빌드

4.1 (3.1) 의 binaries 경로에 생성된 VTK.sln 솔루션을 Open (관리자 권한 필요)

4.2 Debug, Release 모드로 각각 ALL_BUILD 프로젝트를 빌드, INSTALL 프로젝트를 빌드.
 INSTALL 빌드가 완료되면 C:/Program Files/VTK 또는 C:/Program Files (x86)/VTK 폴더에
 생성되는 결과물을 따로 취합.





VTK 사용을 위해 디렉토리 경로 설정

$(SolutionDir)Ext_Lib\VTK-8.0.0\Include\$(PlatformName)
$(SolutionDir)Ext_Lib\VTK-8.0.0\lib\$(PlatformName)\$(ConfigurationName)





stdafx.h 등에서 lib 를 선언 

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