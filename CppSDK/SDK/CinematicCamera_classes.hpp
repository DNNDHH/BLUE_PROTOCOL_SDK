#pragma once

 

// Package: CinematicCamera

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CinematicCamera_structs.hpp"


namespace SDK
{

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x0258 - 0x0228)
class ACameraRig_Crane final : public AActor
{
public:
	float                                         CranePitch;                                        // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CraneYaw;                                          // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CraneArmLength;                                    // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockMountPitch;                                   // 0x0234(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockMountYaw;                                     // 0x0235(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4107[0x2];                                     // 0x0236(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TransformComponent;                                // 0x0238(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CraneYawControl;                                   // 0x0240(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CranePitchControl;                                 // 0x0248(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CraneCameraMount;                                  // 0x0250(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Crane">();
	}
	static class ACameraRig_Crane* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Crane>();
	}
};
static_assert(alignof(ACameraRig_Crane) == 0x000008, "Wrong alignment on ACameraRig_Crane");
static_assert(sizeof(ACameraRig_Crane) == 0x000258, "Wrong size on ACameraRig_Crane");
static_assert(offsetof(ACameraRig_Crane, CranePitch) == 0x000228, "Member 'ACameraRig_Crane::CranePitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYaw) == 0x00022C, "Member 'ACameraRig_Crane::CraneYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneArmLength) == 0x000230, "Member 'ACameraRig_Crane::CraneArmLength' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountPitch) == 0x000234, "Member 'ACameraRig_Crane::bLockMountPitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountYaw) == 0x000235, "Member 'ACameraRig_Crane::bLockMountYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x000238, "Member 'ACameraRig_Crane::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x000240, "Member 'ACameraRig_Crane::CraneYawControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x000248, "Member 'ACameraRig_Crane::CranePitchControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x000250, "Member 'ACameraRig_Crane::CraneCameraMount' has a wrong offset!");

// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x0248 - 0x0228)
class ACameraRig_Rail final : public AActor
{
public:
	float                                         CurrentPositionOnRail;                             // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockOrientationToRail;                            // 0x022C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4108[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TransformComponent;                                // 0x0230(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineComponent*                       RailSplineComponent;                               // 0x0238(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        RailCameraMount;                                   // 0x0240(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class USplineComponent* GetRailSplineComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Rail">();
	}
	static class ACameraRig_Rail* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Rail>();
	}
};
static_assert(alignof(ACameraRig_Rail) == 0x000008, "Wrong alignment on ACameraRig_Rail");
static_assert(sizeof(ACameraRig_Rail) == 0x000248, "Wrong size on ACameraRig_Rail");
static_assert(offsetof(ACameraRig_Rail, CurrentPositionOnRail) == 0x000228, "Member 'ACameraRig_Rail::CurrentPositionOnRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, bLockOrientationToRail) == 0x00022C, "Member 'ACameraRig_Rail::bLockOrientationToRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x000230, "Member 'ACameraRig_Rail::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x000238, "Member 'ACameraRig_Rail::RailSplineComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x000240, "Member 'ACameraRig_Rail::RailCameraMount' has a wrong offset!");

// Class CinematicCamera.CineCameraActor
// 0x0060 (0x0A40 - 0x09E0)
class ACineCameraActor final : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings          LookatTrackingSettings;                            // 0x09E0(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_4109[0x10];                                    // 0x0A30(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UCineCameraComponent* GetCineCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraActor">();
	}
	static class ACineCameraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACineCameraActor>();
	}
};
static_assert(alignof(ACineCameraActor) == 0x000010, "Wrong alignment on ACineCameraActor");
static_assert(sizeof(ACineCameraActor) == 0x000A40, "Wrong size on ACineCameraActor");
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x0009E0, "Member 'ACineCameraActor::LookatTrackingSettings' has a wrong offset!");

// Class CinematicCamera.CineCameraComponent
// 0x0100 (0x0B00 - 0x0A00)
class UCineCameraComponent final : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                FilmbackSettings;                                  // 0x0A00(0x000C)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                Filmback;                                          // 0x0A0C(0x000C)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x0A18(0x0018)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFocusSettings                   FocusSettings;                                     // 0x0A30(0x0058)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         CurrentFocalLength;                                // 0x0A88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentAperture;                                   // 0x0A8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentFocusDistance;                              // 0x0A90(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_410A[0xC];                                     // 0x0A94(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNamedFilmbackPreset>           FilmbackPresets;                                   // 0x0AA0(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>               LensPresets;                                       // 0x0AB0(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                 DefaultFilmbackPresetName;                         // 0x0AC0(0x0010)(ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 DefaultFilmbackPreset;                             // 0x0AD0(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 DefaultLensPresetName;                             // 0x0AE0(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultLensFocalLength;                            // 0x0AF0(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultLensFStop;                                  // 0x0AF4(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_410B[0x8];                                     // 0x0AF8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy();
	static TArray<struct FNamedLensPreset> GetLensPresetsCopy();

	void SetCurrentFocalLength(float InFocalLength);
	void SetFilmbackPresetByName(const class FString& InPresetName);
	void SetLensPresetByName(const class FString& InPresetName);

	class FString GetDefaultFilmbackPresetName() const;
	class FString GetFilmbackPresetName() const;
	float GetHorizontalFieldOfView() const;
	class FString GetLensPresetName() const;
	float GetVerticalFieldOfView() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraComponent">();
	}
	static class UCineCameraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCineCameraComponent>();
	}
};
static_assert(alignof(UCineCameraComponent) == 0x000010, "Wrong alignment on UCineCameraComponent");
static_assert(sizeof(UCineCameraComponent) == 0x000B00, "Wrong size on UCineCameraComponent");
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x000A00, "Member 'UCineCameraComponent::FilmbackSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x000A0C, "Member 'UCineCameraComponent::Filmback' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x000A18, "Member 'UCineCameraComponent::LensSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x000A30, "Member 'UCineCameraComponent::FocusSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocalLength) == 0x000A88, "Member 'UCineCameraComponent::CurrentFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentAperture) == 0x000A8C, "Member 'UCineCameraComponent::CurrentAperture' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocusDistance) == 0x000A90, "Member 'UCineCameraComponent::CurrentFocusDistance' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x000AA0, "Member 'UCineCameraComponent::FilmbackPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x000AB0, "Member 'UCineCameraComponent::LensPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x000AC0, "Member 'UCineCameraComponent::DefaultFilmbackPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x000AD0, "Member 'UCineCameraComponent::DefaultFilmbackPreset' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x000AE0, "Member 'UCineCameraComponent::DefaultLensPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFocalLength) == 0x000AF0, "Member 'UCineCameraComponent::DefaultLensFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFStop) == 0x000AF4, "Member 'UCineCameraComponent::DefaultLensFStop' has a wrong offset!");

}
