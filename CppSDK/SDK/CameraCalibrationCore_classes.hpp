#pragma once

 

// Package: CameraCalibrationCore

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "CameraCalibrationCore_structs.hpp"
#include "ProceduralMeshComponent_classes.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class CameraCalibrationCore.CameraCalibrationSubsystem
// 0x01F0 (0x0220 - 0x0030)
class UCameraCalibrationSubsystem final : public UEngineSubsystem
{
public:
	class ULensFile*                              DefaultLensFile;                                   // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class ULensModel>> LensModelMap;                                      // 0x0038(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UCameraNodalOffsetAlgo>> CameraNodalOffsetAlgosMap;                         // 0x0088(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TSubclassOf<class UCameraCalibrationStep>> CameraCalibrationStepsMap;                         // 0x00D8(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10AC[0xF8];                                    // 0x0128(0x00F8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class ULensDistortionModelHandlerBase* FindOrCreateDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, const TSubclassOf<class ULensModel> LensModelClass);
	TArray<class ULensDistortionModelHandlerBase*> GetDistortionModelHandlers(class UCineCameraComponent* Component);
	void SetDefaultLensFile(class ULensFile* NewDefaultLensFile);
	void UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler);

	class ULensDistortionModelHandlerBase* FindDistortionModelHandler(struct FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker) const;
	TSubclassOf<class UCameraCalibrationStep> GetCameraCalibrationStep(class FName Param_Name) const;
	TArray<class FName> GetCameraCalibrationSteps() const;
	TSubclassOf<class UCameraNodalOffsetAlgo> GetCameraNodalOffsetAlgo(class FName Param_Name) const;
	TArray<class FName> GetCameraNodalOffsetAlgos() const;
	class ULensFile* GetDefaultLensFile() const;
	class ULensFile* GetLensFile(const struct FLensFilePicker& Picker) const;
	TSubclassOf<class ULensModel> GetRegisteredLensModel(class FName ModelName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationSubsystem">();
	}
	static class UCameraCalibrationSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraCalibrationSubsystem>();
	}
};
static_assert(alignof(UCameraCalibrationSubsystem) == 0x000008, "Wrong alignment on UCameraCalibrationSubsystem");
static_assert(sizeof(UCameraCalibrationSubsystem) == 0x000220, "Wrong size on UCameraCalibrationSubsystem");
static_assert(offsetof(UCameraCalibrationSubsystem, DefaultLensFile) == 0x000030, "Member 'UCameraCalibrationSubsystem::DefaultLensFile' has a wrong offset!");
static_assert(offsetof(UCameraCalibrationSubsystem, LensModelMap) == 0x000038, "Member 'UCameraCalibrationSubsystem::LensModelMap' has a wrong offset!");
static_assert(offsetof(UCameraCalibrationSubsystem, CameraNodalOffsetAlgosMap) == 0x000088, "Member 'UCameraCalibrationSubsystem::CameraNodalOffsetAlgosMap' has a wrong offset!");
static_assert(offsetof(UCameraCalibrationSubsystem, CameraCalibrationStepsMap) == 0x0000D8, "Member 'UCameraCalibrationSubsystem::CameraCalibrationStepsMap' has a wrong offset!");

// Class CameraCalibrationCore.CalibrationPointComponent
// 0x0060 (0x0560 - 0x0500)
class UCalibrationPointComponent final : public UProceduralMeshComponent
{
public:
	TMap<class FString, struct FVector>           SubPoints;                                         // 0x04F8(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                          bVisualizePointsInEditor;                          // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10AE[0x3];                                     // 0x0549(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PointVisualizationScale;                           // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECalibrationPointVisualization                VisualizationShape;                                // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10AF[0xF];                                     // 0x0551(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RebuildVertices();

	void GetNamespacedPointNames(TArray<class FString>* OutNamespacedNames) const;
	bool GetWorldLocation(const class FString& InPointName, struct FVector* OutLocation) const;
	bool NamespacedSubpointName(const class FString& InSubpointName, class FString* OutNamespacedName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CalibrationPointComponent">();
	}
	static class UCalibrationPointComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalibrationPointComponent>();
	}
};
static_assert(alignof(UCalibrationPointComponent) == 0x000010, "Wrong alignment on UCalibrationPointComponent");
static_assert(sizeof(UCalibrationPointComponent) == 0x000560, "Wrong size on UCalibrationPointComponent");
static_assert(offsetof(UCalibrationPointComponent, SubPoints) == 0x0004F8, "Member 'UCalibrationPointComponent::SubPoints' has a wrong offset!");
static_assert(offsetof(UCalibrationPointComponent, bVisualizePointsInEditor) == 0x000548, "Member 'UCalibrationPointComponent::bVisualizePointsInEditor' has a wrong offset!");
static_assert(offsetof(UCalibrationPointComponent, PointVisualizationScale) == 0x00054C, "Member 'UCalibrationPointComponent::PointVisualizationScale' has a wrong offset!");
static_assert(offsetof(UCalibrationPointComponent, VisualizationShape) == 0x000550, "Member 'UCalibrationPointComponent::VisualizationShape' has a wrong offset!");

// Class CameraCalibrationCore.CameraLensDistortionAlgo
// 0x0000 (0x0028 - 0x0028)
class UCameraLensDistortionAlgo final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraLensDistortionAlgo">();
	}
	static class UCameraLensDistortionAlgo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraLensDistortionAlgo>();
	}
};
static_assert(alignof(UCameraLensDistortionAlgo) == 0x000008, "Wrong alignment on UCameraLensDistortionAlgo");
static_assert(sizeof(UCameraLensDistortionAlgo) == 0x000028, "Wrong size on UCameraLensDistortionAlgo");

// Class CameraCalibrationCore.CameraCalibrationCheckerboard
// 0x0058 (0x0280 - 0x0228)
class ACameraCalibrationCheckerboard final : public AActor
{
public:
	class USceneComponent*                        Root;                                              // 0x0228(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             TopLeft;                                           // 0x0230(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             TopRight;                                          // 0x0238(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             BottomLeft;                                        // 0x0240(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             BottomRight;                                       // 0x0248(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCalibrationPointComponent*             Center;                                            // 0x0250(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumCornerRows;                                     // 0x0258(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         NumCornerCols;                                     // 0x025C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SquareSideLength;                                  // 0x0260(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Thickness;                                         // 0x0264(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                            CubeMesh;                                          // 0x0268(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     OddCubeMaterial;                                   // 0x0270(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     EvenCubeMaterial;                                  // 0x0278(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void Rebuild();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationCheckerboard">();
	}
	static class ACameraCalibrationCheckerboard* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraCalibrationCheckerboard>();
	}
};
static_assert(alignof(ACameraCalibrationCheckerboard) == 0x000008, "Wrong alignment on ACameraCalibrationCheckerboard");
static_assert(sizeof(ACameraCalibrationCheckerboard) == 0x000280, "Wrong size on ACameraCalibrationCheckerboard");
static_assert(offsetof(ACameraCalibrationCheckerboard, Root) == 0x000228, "Member 'ACameraCalibrationCheckerboard::Root' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, TopLeft) == 0x000230, "Member 'ACameraCalibrationCheckerboard::TopLeft' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, TopRight) == 0x000238, "Member 'ACameraCalibrationCheckerboard::TopRight' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, BottomLeft) == 0x000240, "Member 'ACameraCalibrationCheckerboard::BottomLeft' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, BottomRight) == 0x000248, "Member 'ACameraCalibrationCheckerboard::BottomRight' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, Center) == 0x000250, "Member 'ACameraCalibrationCheckerboard::Center' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, NumCornerRows) == 0x000258, "Member 'ACameraCalibrationCheckerboard::NumCornerRows' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, NumCornerCols) == 0x00025C, "Member 'ACameraCalibrationCheckerboard::NumCornerCols' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, SquareSideLength) == 0x000260, "Member 'ACameraCalibrationCheckerboard::SquareSideLength' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, Thickness) == 0x000264, "Member 'ACameraCalibrationCheckerboard::Thickness' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, CubeMesh) == 0x000268, "Member 'ACameraCalibrationCheckerboard::CubeMesh' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, OddCubeMaterial) == 0x000270, "Member 'ACameraCalibrationCheckerboard::OddCubeMaterial' has a wrong offset!");
static_assert(offsetof(ACameraCalibrationCheckerboard, EvenCubeMaterial) == 0x000278, "Member 'ACameraCalibrationCheckerboard::EvenCubeMaterial' has a wrong offset!");

// Class CameraCalibrationCore.CameraNodalOffsetAlgo
// 0x0000 (0x0028 - 0x0028)
class UCameraNodalOffsetAlgo final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraNodalOffsetAlgo">();
	}
	static class UCameraNodalOffsetAlgo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraNodalOffsetAlgo>();
	}
};
static_assert(alignof(UCameraNodalOffsetAlgo) == 0x000008, "Wrong alignment on UCameraNodalOffsetAlgo");
static_assert(sizeof(UCameraNodalOffsetAlgo) == 0x000028, "Wrong size on UCameraNodalOffsetAlgo");

// Class CameraCalibrationCore.CameraCalibrationSettings
// 0x0128 (0x0160 - 0x0038)
class UCameraCalibrationSettings final : public UDeveloperSettings
{
public:
	TSoftObjectPtr<class ULensFile>               StartupLensFile;                                   // 0x0038(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                              DisplacementMapResolution;                         // 0x0060(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         CalibrationInputTolerance;                         // 0x0068(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_10B2[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultUndistortionDisplacementMaterials;          // 0x0070(0x0050)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultDistortionDisplacementMaterials;            // 0x00C0(0x0050)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class ULensDistortionModelHandlerBase>, TSoftObjectPtr<class UMaterialInterface>> DefaultDistortionMaterials;                        // 0x0110(0x0050)(Config, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationSettings">();
	}
	static class UCameraCalibrationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraCalibrationSettings>();
	}
};
static_assert(alignof(UCameraCalibrationSettings) == 0x000008, "Wrong alignment on UCameraCalibrationSettings");
static_assert(sizeof(UCameraCalibrationSettings) == 0x000160, "Wrong size on UCameraCalibrationSettings");
static_assert(offsetof(UCameraCalibrationSettings, StartupLensFile) == 0x000038, "Member 'UCameraCalibrationSettings::StartupLensFile' has a wrong offset!");
static_assert(offsetof(UCameraCalibrationSettings, DisplacementMapResolution) == 0x000060, "Member 'UCameraCalibrationSettings::DisplacementMapResolution' has a wrong offset!");
static_assert(offsetof(UCameraCalibrationSettings, CalibrationInputTolerance) == 0x000068, "Member 'UCameraCalibrationSettings::CalibrationInputTolerance' has a wrong offset!");
static_assert(offsetof(UCameraCalibrationSettings, DefaultUndistortionDisplacementMaterials) == 0x000070, "Member 'UCameraCalibrationSettings::DefaultUndistortionDisplacementMaterials' has a wrong offset!");
static_assert(offsetof(UCameraCalibrationSettings, DefaultDistortionDisplacementMaterials) == 0x0000C0, "Member 'UCameraCalibrationSettings::DefaultDistortionDisplacementMaterials' has a wrong offset!");
static_assert(offsetof(UCameraCalibrationSettings, DefaultDistortionMaterials) == 0x000110, "Member 'UCameraCalibrationSettings::DefaultDistortionMaterials' has a wrong offset!");

// Class CameraCalibrationCore.CameraCalibrationEditorSettings
// 0x0000 (0x0038 - 0x0038)
class UCameraCalibrationEditorSettings final : public UDeveloperSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationEditorSettings">();
	}
	static class UCameraCalibrationEditorSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraCalibrationEditorSettings>();
	}
};
static_assert(alignof(UCameraCalibrationEditorSettings) == 0x000008, "Wrong alignment on UCameraCalibrationEditorSettings");
static_assert(sizeof(UCameraCalibrationEditorSettings) == 0x000038, "Wrong size on UCameraCalibrationEditorSettings");

// Class CameraCalibrationCore.CameraCalibrationStep
// 0x0000 (0x0028 - 0x0028)
class UCameraCalibrationStep final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraCalibrationStep">();
	}
	static class UCameraCalibrationStep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraCalibrationStep>();
	}
};
static_assert(alignof(UCameraCalibrationStep) == 0x000008, "Wrong alignment on UCameraCalibrationStep");
static_assert(sizeof(UCameraCalibrationStep) == 0x000028, "Wrong size on UCameraCalibrationStep");

// Class CameraCalibrationCore.LensDistortionModelHandlerBase
// 0x0080 (0x00A8 - 0x0028)
class ULensDistortionModelHandlerBase : public UObject
{
public:
	TSubclassOf<class ULensModel>                 LensModelClass;                                    // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               DistortionPostProcessMID;                          // 0x0030(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLensDistortionState                   CurrentState;                                      // 0x0038(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                 DisplayName;                                       // 0x0058(0x0010)(Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         OverscanFactor;                                    // 0x0068(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_10B3[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               UndistortionDisplacementMapMID;                    // 0x0070(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               DistortionDisplacementMapMID;                      // 0x0078(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                 UndistortionDisplacementMapRT;                     // 0x0080(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                 DistortionDisplacementMapRT;                       // 0x0088(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                  DistortionProducerID;                              // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_10B4[0x8];                                     // 0x00A0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetDistortionState(const struct FLensDistortionState& InNewState);

	class UTextureRenderTarget2D* GetDistortionDisplacementMap() const;
	class UTextureRenderTarget2D* GetUndistortionDisplacementMap() const;
	bool IsModelSupported(const TSubclassOf<class ULensModel>& ModelToSupport) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LensDistortionModelHandlerBase">();
	}
	static class ULensDistortionModelHandlerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULensDistortionModelHandlerBase>();
	}
};
static_assert(alignof(ULensDistortionModelHandlerBase) == 0x000008, "Wrong alignment on ULensDistortionModelHandlerBase");
static_assert(sizeof(ULensDistortionModelHandlerBase) == 0x0000A8, "Wrong size on ULensDistortionModelHandlerBase");
static_assert(offsetof(ULensDistortionModelHandlerBase, LensModelClass) == 0x000028, "Member 'ULensDistortionModelHandlerBase::LensModelClass' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, DistortionPostProcessMID) == 0x000030, "Member 'ULensDistortionModelHandlerBase::DistortionPostProcessMID' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, CurrentState) == 0x000038, "Member 'ULensDistortionModelHandlerBase::CurrentState' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, DisplayName) == 0x000058, "Member 'ULensDistortionModelHandlerBase::DisplayName' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, OverscanFactor) == 0x000068, "Member 'ULensDistortionModelHandlerBase::OverscanFactor' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, UndistortionDisplacementMapMID) == 0x000070, "Member 'ULensDistortionModelHandlerBase::UndistortionDisplacementMapMID' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, DistortionDisplacementMapMID) == 0x000078, "Member 'ULensDistortionModelHandlerBase::DistortionDisplacementMapMID' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, UndistortionDisplacementMapRT) == 0x000080, "Member 'ULensDistortionModelHandlerBase::UndistortionDisplacementMapRT' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, DistortionDisplacementMapRT) == 0x000088, "Member 'ULensDistortionModelHandlerBase::DistortionDisplacementMapRT' has a wrong offset!");
static_assert(offsetof(ULensDistortionModelHandlerBase, DistortionProducerID) == 0x000090, "Member 'ULensDistortionModelHandlerBase::DistortionProducerID' has a wrong offset!");

// Class CameraCalibrationCore.LensFile
// 0x0260 (0x0288 - 0x0028)
class ULensFile final : public UObject
{
public:
	uint8                                         Pad_10B6[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLensInfo                              LensInfo;                                          // 0x0030(0x0030)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	ELensDataMode                                 DataMode;                                          // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10B7[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FString>            UserMetadata;                                      // 0x0068(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FEncodersTable                         EncodersTable;                                     // 0x00B8(0x0100)(NativeAccessSpecifierPublic)
	struct FDistortionTable                       DistortionTable;                                   // 0x01B8(0x0020)(NativeAccessSpecifierPublic)
	struct FFocalLengthTable                      FocalLengthTable;                                  // 0x01D8(0x0020)(NativeAccessSpecifierPublic)
	struct FImageCenterTable                      ImageCenterTable;                                  // 0x01F8(0x0020)(NativeAccessSpecifierPublic)
	struct FNodalOffsetTable                      NodalOffsetTable;                                  // 0x0218(0x0020)(NativeAccessSpecifierPublic)
	struct FSTMapTable                            STMapTable;                                        // 0x0238(0x0020)(NativeAccessSpecifierPublic)
	uint8                                         Pad_10B8[0x10];                                    // 0x0258(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTextureRenderTarget2D*>         UndistortionDisplacementMapHolders;                // 0x0268(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UTextureRenderTarget2D*>         DistortionDisplacementMapHolders;                  // 0x0278(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

public:
	void AddDistortionPoint(float NewFocus, float NewZoom, const struct FDistortionInfo& NewPoint, const struct FFocalLengthInfo& NewFocalLength);
	void AddFocalLengthPoint(float NewFocus, float NewZoom, const struct FFocalLengthInfo& NewFocalLength);
	void AddImageCenterPoint(float NewFocus, float NewZoom, const struct FImageCenterInfo& NewPoint);
	void AddNodalOffsetPoint(float NewFocus, float NewZoom, const struct FNodalPointOffset& NewPoint);
	void AddSTMapPoint(float NewFocus, float NewZoom, const struct FSTMapInfo& NewPoint);
	void ClearAll();
	void ClearData(ELensDataCategory InDataCategory);
	void RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus);
	void RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom);

	bool EvaluateDistortionData(float InFocus, float InZoom, const struct FVector2D& InFilmback, class ULensDistortionModelHandlerBase* InLensHandler) const;
	bool EvaluateDistortionParameters(float InFocus, float InZoom, struct FDistortionInfo* OutEvaluatedValue) const;
	bool EvaluateFocalLength(float InFocus, float InZoom, struct FFocalLengthInfo* OutEvaluatedValue) const;
	bool EvaluateImageCenterParameters(float InFocus, float InZoom, struct FImageCenterInfo* OutEvaluatedValue) const;
	bool EvaluateNodalPointOffset(float InFocus, float InZoom, struct FNodalPointOffset* OutEvaluatedValue) const;
	float EvaluateNormalizedFocus(float InNormalizedValue) const;
	float EvaluateNormalizedIris(float InNormalizedValue) const;
	bool GetDistortionPoint(float InFocus, float InZoom, struct FDistortionInfo* OutDistortionInfo) const;
	TArray<struct FDistortionPointInfo> GetDistortionPoints() const;
	bool GetFocalLengthPoint(float InFocus, float InZoom, struct FFocalLengthInfo* OutFocalLengthInfo) const;
	TArray<struct FFocalLengthPointInfo> GetFocalLengthPoints() const;
	bool GetImageCenterPoint(float InFocus, float InZoom, struct FImageCenterInfo* OutImageCenterInfo) const;
	TArray<struct FImageCenterPointInfo> GetImageCenterPoints() const;
	bool GetNodalOffsetPoint(float InFocus, float InZoom, struct FNodalPointOffset* OutNodalPointOffset) const;
	TArray<struct FNodalOffsetPointInfo> GetNodalOffsetPoints() const;
	bool GetSTMapPoint(float InFocus, float InZoom, struct FSTMapInfo* OutSTMapInfo) const;
	TArray<struct FSTMapPointInfo> GetSTMapPoints() const;
	bool HasFocusEncoderMapping() const;
	bool HasIrisEncoderMapping() const;
	bool HasSamples(ELensDataCategory InDataCategory) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LensFile">();
	}
	static class ULensFile* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULensFile>();
	}
};
static_assert(alignof(ULensFile) == 0x000008, "Wrong alignment on ULensFile");
static_assert(sizeof(ULensFile) == 0x000288, "Wrong size on ULensFile");
static_assert(offsetof(ULensFile, LensInfo) == 0x000030, "Member 'ULensFile::LensInfo' has a wrong offset!");
static_assert(offsetof(ULensFile, DataMode) == 0x000060, "Member 'ULensFile::DataMode' has a wrong offset!");
static_assert(offsetof(ULensFile, UserMetadata) == 0x000068, "Member 'ULensFile::UserMetadata' has a wrong offset!");
static_assert(offsetof(ULensFile, EncodersTable) == 0x0000B8, "Member 'ULensFile::EncodersTable' has a wrong offset!");
static_assert(offsetof(ULensFile, DistortionTable) == 0x0001B8, "Member 'ULensFile::DistortionTable' has a wrong offset!");
static_assert(offsetof(ULensFile, FocalLengthTable) == 0x0001D8, "Member 'ULensFile::FocalLengthTable' has a wrong offset!");
static_assert(offsetof(ULensFile, ImageCenterTable) == 0x0001F8, "Member 'ULensFile::ImageCenterTable' has a wrong offset!");
static_assert(offsetof(ULensFile, NodalOffsetTable) == 0x000218, "Member 'ULensFile::NodalOffsetTable' has a wrong offset!");
static_assert(offsetof(ULensFile, STMapTable) == 0x000238, "Member 'ULensFile::STMapTable' has a wrong offset!");
static_assert(offsetof(ULensFile, UndistortionDisplacementMapHolders) == 0x000268, "Member 'ULensFile::UndistortionDisplacementMapHolders' has a wrong offset!");
static_assert(offsetof(ULensFile, DistortionDisplacementMapHolders) == 0x000278, "Member 'ULensFile::DistortionDisplacementMapHolders' has a wrong offset!");

// Class CameraCalibrationCore.LensModel
// 0x0000 (0x0028 - 0x0028)
class ULensModel : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LensModel">();
	}
	static class ULensModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULensModel>();
	}
};
static_assert(alignof(ULensModel) == 0x000008, "Wrong alignment on ULensModel");
static_assert(sizeof(ULensModel) == 0x000028, "Wrong size on ULensModel");

// Class CameraCalibrationCore.SphericalLensDistortionModelHandler
// 0x0018 (0x00C0 - 0x00A8)
class USphericalLensDistortionModelHandler final : public ULensDistortionModelHandlerBase
{
public:
	uint8                                         Pad_10C8[0x18];                                    // 0x00A8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphericalLensDistortionModelHandler">();
	}
	static class USphericalLensDistortionModelHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphericalLensDistortionModelHandler>();
	}
};
static_assert(alignof(USphericalLensDistortionModelHandler) == 0x000008, "Wrong alignment on USphericalLensDistortionModelHandler");
static_assert(sizeof(USphericalLensDistortionModelHandler) == 0x0000C0, "Wrong size on USphericalLensDistortionModelHandler");

// Class CameraCalibrationCore.SphericalLensModel
// 0x0000 (0x0028 - 0x0028)
class USphericalLensModel final : public ULensModel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SphericalLensModel">();
	}
	static class USphericalLensModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<USphericalLensModel>();
	}
};
static_assert(alignof(USphericalLensModel) == 0x000008, "Wrong alignment on USphericalLensModel");
static_assert(sizeof(USphericalLensModel) == 0x000028, "Wrong size on USphericalLensModel");

}

