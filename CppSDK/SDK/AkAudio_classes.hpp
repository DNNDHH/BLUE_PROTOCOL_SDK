#pragma once

 

// Package: AkAudio

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class AkAudio.AkGameObject
// 0x0020 (0x0230 - 0x0210)
#pragma pack(push, 0x1)
class alignas(0x10) UAkGameObject : public USceneComponent
{
public:
	class UAkAudioEvent*                          AkAudioEvent;                                      // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 EventName;                                         // 0x0210(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FBE[0x8];                                     // 0x0220(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 PostAkEvent(class UAkAudioEvent* AkEvent, int32 CallbackMask, const TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)>& PostEventCallback, const TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& In_EventName);
	void PostAkEventAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32* PlayingID, int32 CallbackMask, const TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)>& PostEventCallback, const TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAssociatedAkEvent(int32 CallbackMask, const TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)>& PostEventCallback, const TArray<struct FAkExternalSourceInfo>& ExternalSources);
	void PostAssociatedAkEventAsync(const class UObject* WorldContextObject, int32 CallbackMask, const TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)>& PostEventCallback, const TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo, int32* PlayingID);
	void Stop();

	void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, const class FString& RTPC, int32 PlayingID) const;
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const class FString& RTPC) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkGameObject">();
	}
	static class UAkGameObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkGameObject>();
	}
};
#pragma pack(pop)
static_assert(alignof(UAkGameObject) == 0x000010, "Wrong alignment on UAkGameObject");
static_assert(sizeof(UAkGameObject) == 0x000230, "Wrong size on UAkGameObject");
static_assert(offsetof(UAkGameObject, AkAudioEvent) == 0x000208, "Member 'UAkGameObject::AkAudioEvent' has a wrong offset!");
static_assert(offsetof(UAkGameObject, EventName) == 0x000210, "Member 'UAkGameObject::EventName' has a wrong offset!");

// Class AkAudio.AkRoomComponent
// 0x0030 (0x0260 - 0x0230)
class UAkRoomComponent final : public UAkGameObject
{
public:
	uint8                                         bEnable : 1;                                       // 0x0228(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1FC8[0x3];                                     // 0x0229(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bDynamic;                                          // 0x022C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FC9[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Priority;                                          // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WallOcclusion;                                     // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AuxSendLevel;                                      // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoPost;                                          // 0x023C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FCA[0xB];                                     // 0x023D(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAcousticTextureSetComponent*         GeometryComponent;                                 // 0x0248(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1FCB[0x10];                                    // 0x0250(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetGeometryComponent(class UAkAcousticTextureSetComponent* TextureSetComponent);

	class UPrimitiveComponent* GetPrimitiveParent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkRoomComponent">();
	}
	static class UAkRoomComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkRoomComponent>();
	}
};
static_assert(alignof(UAkRoomComponent) == 0x000010, "Wrong alignment on UAkRoomComponent");
static_assert(sizeof(UAkRoomComponent) == 0x000260, "Wrong size on UAkRoomComponent");
static_assert(offsetof(UAkRoomComponent, bDynamic) == 0x00022C, "Member 'UAkRoomComponent::bDynamic' has a wrong offset!");
static_assert(offsetof(UAkRoomComponent, Priority) == 0x000230, "Member 'UAkRoomComponent::Priority' has a wrong offset!");
static_assert(offsetof(UAkRoomComponent, WallOcclusion) == 0x000234, "Member 'UAkRoomComponent::WallOcclusion' has a wrong offset!");
static_assert(offsetof(UAkRoomComponent, AuxSendLevel) == 0x000238, "Member 'UAkRoomComponent::AuxSendLevel' has a wrong offset!");
static_assert(offsetof(UAkRoomComponent, AutoPost) == 0x00023C, "Member 'UAkRoomComponent::AutoPost' has a wrong offset!");
static_assert(offsetof(UAkRoomComponent, GeometryComponent) == 0x000248, "Member 'UAkRoomComponent::GeometryComponent' has a wrong offset!");

// Class AkAudio.AkPortalComponent
// 0x00C0 (0x02D0 - 0x0210)
class UAkPortalComponent final : public USceneComponent
{
public:
	bool                                          bDynamic;                                          // 0x0208(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAkAcousticPortalState                        InitialState;                                      // 0x0209(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FCC[0x2];                                     // 0x020A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ObstructionRefreshInterval;                        // 0x020C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionChannel                             ObstructionCollisionChannel;                       // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FCD[0xBF];                                    // 0x0211(0x00BF)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClosePortal();
	void OpenPortal();

	EAkAcousticPortalState GetCurrentState() const;
	class UPrimitiveComponent* GetPrimitiveParent() const;
	bool PortalPlacementValid() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkPortalComponent">();
	}
	static class UAkPortalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkPortalComponent>();
	}
};
static_assert(alignof(UAkPortalComponent) == 0x000010, "Wrong alignment on UAkPortalComponent");
static_assert(sizeof(UAkPortalComponent) == 0x0002D0, "Wrong size on UAkPortalComponent");
static_assert(offsetof(UAkPortalComponent, bDynamic) == 0x000208, "Member 'UAkPortalComponent::bDynamic' has a wrong offset!");
static_assert(offsetof(UAkPortalComponent, InitialState) == 0x000209, "Member 'UAkPortalComponent::InitialState' has a wrong offset!");
static_assert(offsetof(UAkPortalComponent, ObstructionRefreshInterval) == 0x00020C, "Member 'UAkPortalComponent::ObstructionRefreshInterval' has a wrong offset!");
static_assert(offsetof(UAkPortalComponent, ObstructionCollisionChannel) == 0x000210, "Member 'UAkPortalComponent::ObstructionCollisionChannel' has a wrong offset!");

// Class AkAudio.AkAudioType
// 0x0018 (0x0040 - 0x0028)
class UAkAudioType : public UObject
{
public:
	uint32                                        ShortId;                                           // 0x0028(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FCE[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        UserData;                                          // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAudioType">();
	}
	static class UAkAudioType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAudioType>();
	}
};
static_assert(alignof(UAkAudioType) == 0x000008, "Wrong alignment on UAkAudioType");
static_assert(sizeof(UAkAudioType) == 0x000040, "Wrong size on UAkAudioType");
static_assert(offsetof(UAkAudioType, ShortId) == 0x000028, "Member 'UAkAudioType::ShortId' has a wrong offset!");
static_assert(offsetof(UAkAudioType, UserData) == 0x000030, "Member 'UAkAudioType::UserData' has a wrong offset!");

// Class AkAudio.AkRtpc
// 0x0000 (0x0040 - 0x0040)
class UAkRtpc final : public UAkAudioType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkRtpc">();
	}
	static class UAkRtpc* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkRtpc>();
	}
};
static_assert(alignof(UAkRtpc) == 0x000008, "Wrong alignment on UAkRtpc");
static_assert(sizeof(UAkRtpc) == 0x000040, "Wrong size on UAkRtpc");

// Class AkAudio.AkAcousticPortal
// 0x0010 (0x0270 - 0x0260)
class AAkAcousticPortal final : public AVolume
{
public:
	class UAkPortalComponent*                     Portal;                                            // 0x0260(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAkAcousticPortalState                        InitialState;                                      // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bRequiresStateMigration;                           // 0x0269(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1FCF[0x6];                                     // 0x026A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClosePortal();
	void OpenPortal();

	EAkAcousticPortalState GetCurrentState() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAcousticPortal">();
	}
	static class AAkAcousticPortal* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAkAcousticPortal>();
	}
};
static_assert(alignof(AAkAcousticPortal) == 0x000008, "Wrong alignment on AAkAcousticPortal");
static_assert(sizeof(AAkAcousticPortal) == 0x000270, "Wrong size on AAkAcousticPortal");
static_assert(offsetof(AAkAcousticPortal, Portal) == 0x000260, "Member 'AAkAcousticPortal::Portal' has a wrong offset!");
static_assert(offsetof(AAkAcousticPortal, InitialState) == 0x000268, "Member 'AAkAcousticPortal::InitialState' has a wrong offset!");
static_assert(offsetof(AAkAcousticPortal, bRequiresStateMigration) == 0x000269, "Member 'AAkAcousticPortal::bRequiresStateMigration' has a wrong offset!");

// Class AkAudio.AkAcousticTexture
// 0x0000 (0x0040 - 0x0040)
class UAkAcousticTexture final : public UAkAudioType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAcousticTexture">();
	}
	static class UAkAcousticTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAcousticTexture>();
	}
};
static_assert(alignof(UAkAcousticTexture) == 0x000008, "Wrong alignment on UAkAcousticTexture");
static_assert(sizeof(UAkAcousticTexture) == 0x000040, "Wrong size on UAkAcousticTexture");

// Class AkAudio.AkAcousticTextureSetComponent
// 0x0010 (0x0220 - 0x0210)
class UAkAcousticTextureSetComponent : public USceneComponent
{
public:
	uint8                                         Pad_1FD0[0x18];                                    // 0x0208(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAcousticTextureSetComponent">();
	}
	static class UAkAcousticTextureSetComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAcousticTextureSetComponent>();
	}
};
static_assert(alignof(UAkAcousticTextureSetComponent) == 0x000010, "Wrong alignment on UAkAcousticTextureSetComponent");
static_assert(sizeof(UAkAcousticTextureSetComponent) == 0x000220, "Wrong size on UAkAcousticTextureSetComponent");

// Class AkAudio.AkAmbientSound
// 0x0048 (0x0270 - 0x0228)
class AAkAmbientSound final : public AActor
{
public:
	class UAkAudioEvent*                          AkAudioEvent;                                      // 0x0228(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                           AkComponent;                                       // 0x0230(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          StopWhenOwnerIsDestroyed;                          // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoPost;                                          // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FD1[0x2E];                                    // 0x023A(0x002E)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   StaticMeshComponent;                               // 0x0268(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void StartAmbientSound();
	void StopAmbientSound();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAmbientSound">();
	}
	static class AAkAmbientSound* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAkAmbientSound>();
	}
};
static_assert(alignof(AAkAmbientSound) == 0x000008, "Wrong alignment on AAkAmbientSound");
static_assert(sizeof(AAkAmbientSound) == 0x000270, "Wrong size on AAkAmbientSound");
static_assert(offsetof(AAkAmbientSound, AkAudioEvent) == 0x000228, "Member 'AAkAmbientSound::AkAudioEvent' has a wrong offset!");
static_assert(offsetof(AAkAmbientSound, AkComponent) == 0x000230, "Member 'AAkAmbientSound::AkComponent' has a wrong offset!");
static_assert(offsetof(AAkAmbientSound, StopWhenOwnerIsDestroyed) == 0x000238, "Member 'AAkAmbientSound::StopWhenOwnerIsDestroyed' has a wrong offset!");
static_assert(offsetof(AAkAmbientSound, AutoPost) == 0x000239, "Member 'AAkAmbientSound::AutoPost' has a wrong offset!");
static_assert(offsetof(AAkAmbientSound, StaticMeshComponent) == 0x000268, "Member 'AAkAmbientSound::StaticMeshComponent' has a wrong offset!");

// Class AkAudio.AkAndroidInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkAndroidInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_1FD2[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x0030(0x0068)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0098(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings;                                  // 0x00C0(0x0038)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAndroidInitializationSettings">();
	}
	static class UAkAndroidInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAndroidInitializationSettings>();
	}
};
static_assert(alignof(UAkAndroidInitializationSettings) == 0x000008, "Wrong alignment on UAkAndroidInitializationSettings");
static_assert(sizeof(UAkAndroidInitializationSettings) == 0x0000F8, "Wrong size on UAkAndroidInitializationSettings");
static_assert(offsetof(UAkAndroidInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkAndroidInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkAndroidInitializationSettings, CommunicationSettings) == 0x000098, "Member 'UAkAndroidInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkAndroidInitializationSettings, AdvancedSettings) == 0x0000C0, "Member 'UAkAndroidInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkPlatformInfo
// 0x0048 (0x0070 - 0x0028)
class UAkPlatformInfo : public UObject
{
public:
	uint8                                         Pad_1FD3[0x48];                                    // 0x0028(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkPlatformInfo">();
	}
	static class UAkPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkPlatformInfo>();
	}
};
static_assert(alignof(UAkPlatformInfo) == 0x000008, "Wrong alignment on UAkPlatformInfo");
static_assert(sizeof(UAkPlatformInfo) == 0x000070, "Wrong size on UAkPlatformInfo");

// Class AkAudio.AkAndroidPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkAndroidPlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAndroidPlatformInfo">();
	}
	static class UAkAndroidPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAndroidPlatformInfo>();
	}
};
static_assert(alignof(UAkAndroidPlatformInfo) == 0x000008, "Wrong alignment on UAkAndroidPlatformInfo");
static_assert(sizeof(UAkAndroidPlatformInfo) == 0x000070, "Wrong size on UAkAndroidPlatformInfo");

// Class AkAudio.AkAssetBase
// 0x0010 (0x0050 - 0x0040)
class UAkAssetBase : public UAkAudioType
{
public:
	class UAkAssetPlatformData*                   PlatformAssetData;                                 // 0x0040(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FD4[0x8];                                     // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAssetBase">();
	}
	static class UAkAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAssetBase>();
	}
};
static_assert(alignof(UAkAssetBase) == 0x000008, "Wrong alignment on UAkAssetBase");
static_assert(sizeof(UAkAssetBase) == 0x000050, "Wrong size on UAkAssetBase");
static_assert(offsetof(UAkAssetBase, PlatformAssetData) == 0x000040, "Member 'UAkAssetBase::PlatformAssetData' has a wrong offset!");

// Class AkAudio.AkAssetData
// 0x0050 (0x0078 - 0x0028)
class UAkAssetData : public UObject
{
public:
	uint32                                        CachedHash;                                        // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FD5[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 BankLanguage;                                      // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FD6[0x38];                                    // 0x0040(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAssetData">();
	}
	static class UAkAssetData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAssetData>();
	}
};
static_assert(alignof(UAkAssetData) == 0x000008, "Wrong alignment on UAkAssetData");
static_assert(sizeof(UAkAssetData) == 0x000078, "Wrong size on UAkAssetData");
static_assert(offsetof(UAkAssetData, CachedHash) == 0x000028, "Member 'UAkAssetData::CachedHash' has a wrong offset!");
static_assert(offsetof(UAkAssetData, BankLanguage) == 0x000030, "Member 'UAkAssetData::BankLanguage' has a wrong offset!");

// Class AkAudio.AkAssetDataWithMedia
// 0x0010 (0x0088 - 0x0078)
class UAkAssetDataWithMedia : public UAkAssetData
{
public:
	TArray<class UAkMediaAsset*>                  MediaList;                                         // 0x0078(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAssetDataWithMedia">();
	}
	static class UAkAssetDataWithMedia* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAssetDataWithMedia>();
	}
};
static_assert(alignof(UAkAssetDataWithMedia) == 0x000008, "Wrong alignment on UAkAssetDataWithMedia");
static_assert(sizeof(UAkAssetDataWithMedia) == 0x000088, "Wrong size on UAkAssetDataWithMedia");
static_assert(offsetof(UAkAssetDataWithMedia, MediaList) == 0x000078, "Member 'UAkAssetDataWithMedia::MediaList' has a wrong offset!");

// Class AkAudio.AkAssetPlatformData
// 0x0008 (0x0030 - 0x0028)
class UAkAssetPlatformData final : public UObject
{
public:
	class UAkAssetData*                           CurrentAssetData;                                  // 0x0028(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAssetPlatformData">();
	}
	static class UAkAssetPlatformData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAssetPlatformData>();
	}
};
static_assert(alignof(UAkAssetPlatformData) == 0x000008, "Wrong alignment on UAkAssetPlatformData");
static_assert(sizeof(UAkAssetPlatformData) == 0x000030, "Wrong size on UAkAssetPlatformData");
static_assert(offsetof(UAkAssetPlatformData, CurrentAssetData) == 0x000028, "Member 'UAkAssetPlatformData::CurrentAssetData' has a wrong offset!");

// Class AkAudio.AkAssetDataSwitchContainerData
// 0x0050 (0x0078 - 0x0028)
class UAkAssetDataSwitchContainerData final : public UObject
{
public:
	TSoftObjectPtr<class UAkGroupValue>           GroupValue;                                        // 0x0028(0x0028)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkGroupValue*                          DefaultGroupValue;                                 // 0x0050(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAkMediaAsset*>                  MediaList;                                         // 0x0058(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UAkAssetDataSwitchContainerData*> Children;                                          // 0x0068(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAssetDataSwitchContainerData">();
	}
	static class UAkAssetDataSwitchContainerData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAssetDataSwitchContainerData>();
	}
};
static_assert(alignof(UAkAssetDataSwitchContainerData) == 0x000008, "Wrong alignment on UAkAssetDataSwitchContainerData");
static_assert(sizeof(UAkAssetDataSwitchContainerData) == 0x000078, "Wrong size on UAkAssetDataSwitchContainerData");
static_assert(offsetof(UAkAssetDataSwitchContainerData, GroupValue) == 0x000028, "Member 'UAkAssetDataSwitchContainerData::GroupValue' has a wrong offset!");
static_assert(offsetof(UAkAssetDataSwitchContainerData, DefaultGroupValue) == 0x000050, "Member 'UAkAssetDataSwitchContainerData::DefaultGroupValue' has a wrong offset!");
static_assert(offsetof(UAkAssetDataSwitchContainerData, MediaList) == 0x000058, "Member 'UAkAssetDataSwitchContainerData::MediaList' has a wrong offset!");
static_assert(offsetof(UAkAssetDataSwitchContainerData, Children) == 0x000068, "Member 'UAkAssetDataSwitchContainerData::Children' has a wrong offset!");

// Class AkAudio.AkAssetDataSwitchContainer
// 0x0068 (0x00F0 - 0x0088)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
public:
	TArray<class UAkAssetDataSwitchContainerData*> SwitchContainers;                                  // 0x0088(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UAkGroupValue*                          DefaultGroupValue;                                 // 0x0098(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FD7[0x50];                                    // 0x00A0(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAssetDataSwitchContainer">();
	}
	static class UAkAssetDataSwitchContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAssetDataSwitchContainer>();
	}
};
static_assert(alignof(UAkAssetDataSwitchContainer) == 0x000008, "Wrong alignment on UAkAssetDataSwitchContainer");
static_assert(sizeof(UAkAssetDataSwitchContainer) == 0x0000F0, "Wrong size on UAkAssetDataSwitchContainer");
static_assert(offsetof(UAkAssetDataSwitchContainer, SwitchContainers) == 0x000088, "Member 'UAkAssetDataSwitchContainer::SwitchContainers' has a wrong offset!");
static_assert(offsetof(UAkAssetDataSwitchContainer, DefaultGroupValue) == 0x000098, "Member 'UAkAssetDataSwitchContainer::DefaultGroupValue' has a wrong offset!");

// Class AkAudio.AkAudioEventData
// 0x01A0 (0x0290 - 0x00F0)
class UAkAudioEventData final : public UAkAssetDataSwitchContainer
{
public:
	float                                         MaxAttenuationRadius;                              // 0x00F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInfinite;                                        // 0x00F4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FD8[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinimumDuration;                                   // 0x00F8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumDuration;                                   // 0x00FC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UAkAssetDataSwitchContainer*> LocalizedMedia;                                    // 0x0100(0x0050)(Deprecated, NativeAccessSpecifierPublic)
	TSet<class UAkAudioEvent*>                    PostedEvents;                                      // 0x0150(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkAuxBus*>                        UserDefinedSends;                                  // 0x01A0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkTrigger*>                       PostedTriggers;                                    // 0x01F0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkGroupValue*>                    GroupValues;                                       // 0x0240(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAudioEventData">();
	}
	static class UAkAudioEventData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAudioEventData>();
	}
};
static_assert(alignof(UAkAudioEventData) == 0x000008, "Wrong alignment on UAkAudioEventData");
static_assert(sizeof(UAkAudioEventData) == 0x000290, "Wrong size on UAkAudioEventData");
static_assert(offsetof(UAkAudioEventData, MaxAttenuationRadius) == 0x0000F0, "Member 'UAkAudioEventData::MaxAttenuationRadius' has a wrong offset!");
static_assert(offsetof(UAkAudioEventData, IsInfinite) == 0x0000F4, "Member 'UAkAudioEventData::IsInfinite' has a wrong offset!");
static_assert(offsetof(UAkAudioEventData, MinimumDuration) == 0x0000F8, "Member 'UAkAudioEventData::MinimumDuration' has a wrong offset!");
static_assert(offsetof(UAkAudioEventData, MaximumDuration) == 0x0000FC, "Member 'UAkAudioEventData::MaximumDuration' has a wrong offset!");
static_assert(offsetof(UAkAudioEventData, LocalizedMedia) == 0x000100, "Member 'UAkAudioEventData::LocalizedMedia' has a wrong offset!");
static_assert(offsetof(UAkAudioEventData, PostedEvents) == 0x000150, "Member 'UAkAudioEventData::PostedEvents' has a wrong offset!");
static_assert(offsetof(UAkAudioEventData, UserDefinedSends) == 0x0001A0, "Member 'UAkAudioEventData::UserDefinedSends' has a wrong offset!");
static_assert(offsetof(UAkAudioEventData, PostedTriggers) == 0x0001F0, "Member 'UAkAudioEventData::PostedTriggers' has a wrong offset!");
static_assert(offsetof(UAkAudioEventData, GroupValues) == 0x000240, "Member 'UAkAudioEventData::GroupValues' has a wrong offset!");

// Class AkAudio.AkAudioBank
// 0x00C8 (0x0118 - 0x0050)
class UAkAudioBank final : public UAkAssetBase
{
public:
	bool                                          AutoLoad;                                          // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FD9[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;                     // 0x0058(0x0050)(Edit, EditConst, NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class UAkAudioEvent>>     LinkedAkEvents;                                    // 0x00A8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAkAssetPlatformData*                   CurrentLocalizedPlatformAssetData;                 // 0x00F8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1FDA[0x18];                                    // 0x0100(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAudioBank">();
	}
	static class UAkAudioBank* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAudioBank>();
	}
};
static_assert(alignof(UAkAudioBank) == 0x000008, "Wrong alignment on UAkAudioBank");
static_assert(sizeof(UAkAudioBank) == 0x000118, "Wrong size on UAkAudioBank");
static_assert(offsetof(UAkAudioBank, AutoLoad) == 0x000050, "Member 'UAkAudioBank::AutoLoad' has a wrong offset!");
static_assert(offsetof(UAkAudioBank, LocalizedPlatformAssetDataMap) == 0x000058, "Member 'UAkAudioBank::LocalizedPlatformAssetDataMap' has a wrong offset!");
static_assert(offsetof(UAkAudioBank, LinkedAkEvents) == 0x0000A8, "Member 'UAkAudioBank::LinkedAkEvents' has a wrong offset!");
static_assert(offsetof(UAkAudioBank, CurrentLocalizedPlatformAssetData) == 0x0000F8, "Member 'UAkAudioBank::CurrentLocalizedPlatformAssetData' has a wrong offset!");

// Class AkAudio.AkAudioEvent
// 0x0080 (0x00D0 - 0x0050)
class UAkAudioEvent final : public UAkAssetBase
{
public:
	TMap<class FString, class UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;                     // 0x0050(0x0050)(Edit, EditConst, NativeAccessSpecifierPublic)
	class UAkAudioBank*                           RequiredBank;                                      // 0x00A0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FDB[0x8];                                     // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAssetPlatformData*                   CurrentLocalizedPlatformData;                      // 0x00B0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         MaxAttenuationRadius;                              // 0x00B8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          IsInfinite;                                        // 0x00BC(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1FDC[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinimumDuration;                                   // 0x00C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         MaximumDuration;                                   // 0x00C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1FDD[0x8];                                     // 0x00C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool GetIsInfinite() const;
	float GetMaxAttenuationRadius() const;
	float GetMaximumDuration() const;
	float GetMinimumDuration() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAudioEvent">();
	}
	static class UAkAudioEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAudioEvent>();
	}
};
static_assert(alignof(UAkAudioEvent) == 0x000008, "Wrong alignment on UAkAudioEvent");
static_assert(sizeof(UAkAudioEvent) == 0x0000D0, "Wrong size on UAkAudioEvent");
static_assert(offsetof(UAkAudioEvent, LocalizedPlatformAssetDataMap) == 0x000050, "Member 'UAkAudioEvent::LocalizedPlatformAssetDataMap' has a wrong offset!");
static_assert(offsetof(UAkAudioEvent, RequiredBank) == 0x0000A0, "Member 'UAkAudioEvent::RequiredBank' has a wrong offset!");
static_assert(offsetof(UAkAudioEvent, CurrentLocalizedPlatformData) == 0x0000B0, "Member 'UAkAudioEvent::CurrentLocalizedPlatformData' has a wrong offset!");
static_assert(offsetof(UAkAudioEvent, MaxAttenuationRadius) == 0x0000B8, "Member 'UAkAudioEvent::MaxAttenuationRadius' has a wrong offset!");
static_assert(offsetof(UAkAudioEvent, IsInfinite) == 0x0000BC, "Member 'UAkAudioEvent::IsInfinite' has a wrong offset!");
static_assert(offsetof(UAkAudioEvent, MinimumDuration) == 0x0000C0, "Member 'UAkAudioEvent::MinimumDuration' has a wrong offset!");
static_assert(offsetof(UAkAudioEvent, MaximumDuration) == 0x0000C4, "Member 'UAkAudioEvent::MaximumDuration' has a wrong offset!");

// Class AkAudio.AkComponent
// 0x01C0 (0x03F0 - 0x0230)
class UAkComponent : public UAkGameObject
{
public:
	bool                                          bUseSpatialAudio;                                  // 0x0228(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FDE[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	ECollisionChannel                             OcclusionCollisionChannel;                         // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FDF[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         EnableSpotReflectors : 1;                          // 0x0234(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1FE0[0x3];                                     // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OuterRadius;                                       // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InnerRadius;                                       // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAuxBus*                              EarlyReflectionAuxBus;                             // 0x0240(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                 EarlyReflectionAuxBusName;                         // 0x0248(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         EarlyReflectionOrder;                              // 0x0258(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         EarlyReflectionBusSendGain;                        // 0x025C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         EarlyReflectionMaxPathLength;                      // 0x0260(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         RoomReverbAuxBusGain;                              // 0x0264(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         DiffractionMaxEdges;                               // 0x0268(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         DiffractionMaxPaths;                               // 0x026C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         DiffractionMaxPathLength;                          // 0x0270(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         DrawFirstOrderReflections : 1;                     // 0x0274(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DrawSecondOrderReflections : 1;                    // 0x0274(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DrawHigherOrderReflections : 1;                    // 0x0274(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         DrawDiffraction : 1;                               // 0x0274(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1FE1[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          StopWhenOwnerDestroyed;                            // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CanReuse;                                          // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FE2[0x2];                                     // 0x027A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AttenuationScalingFactor;                          // 0x027C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OcclusionRefreshInterval;                          // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseReverbVolumes;                                 // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FE3[0x16B];                                   // 0x0285(0x016B)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& In_EventName, const TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32* PlayingID, const TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int32 PostAkEventByName(const class FString& In_EventName);
	int32 PostAssociatedAkEventAndWaitForEnd(const TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	void PostAssociatedAkEventAndWaitForEndAsync(int32* PlayingID, const TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
	void SetAttenuationScalingFactor(float Value);
	void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
	void SetEarlyReflectionsVolume(float SendVolume);
	void SetGameObjectRadius(float In_outerRadius, float In_innerRadius);
	void SetListeners(const TArray<class UAkComponent*>& Listeners);
	void SetOutputBusVolume(float BusVolume);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
	void UseReverbVolumes(bool InUseReverbVolumes);

	float GetAttenuationRadius() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkComponent">();
	}
	static class UAkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkComponent>();
	}
};
static_assert(alignof(UAkComponent) == 0x000010, "Wrong alignment on UAkComponent");
static_assert(sizeof(UAkComponent) == 0x0003F0, "Wrong size on UAkComponent");
static_assert(offsetof(UAkComponent, bUseSpatialAudio) == 0x000228, "Member 'UAkComponent::bUseSpatialAudio' has a wrong offset!");
static_assert(offsetof(UAkComponent, OcclusionCollisionChannel) == 0x000230, "Member 'UAkComponent::OcclusionCollisionChannel' has a wrong offset!");
static_assert(offsetof(UAkComponent, OuterRadius) == 0x000238, "Member 'UAkComponent::OuterRadius' has a wrong offset!");
static_assert(offsetof(UAkComponent, InnerRadius) == 0x00023C, "Member 'UAkComponent::InnerRadius' has a wrong offset!");
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBus) == 0x000240, "Member 'UAkComponent::EarlyReflectionAuxBus' has a wrong offset!");
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBusName) == 0x000248, "Member 'UAkComponent::EarlyReflectionAuxBusName' has a wrong offset!");
static_assert(offsetof(UAkComponent, EarlyReflectionOrder) == 0x000258, "Member 'UAkComponent::EarlyReflectionOrder' has a wrong offset!");
static_assert(offsetof(UAkComponent, EarlyReflectionBusSendGain) == 0x00025C, "Member 'UAkComponent::EarlyReflectionBusSendGain' has a wrong offset!");
static_assert(offsetof(UAkComponent, EarlyReflectionMaxPathLength) == 0x000260, "Member 'UAkComponent::EarlyReflectionMaxPathLength' has a wrong offset!");
static_assert(offsetof(UAkComponent, RoomReverbAuxBusGain) == 0x000264, "Member 'UAkComponent::RoomReverbAuxBusGain' has a wrong offset!");
static_assert(offsetof(UAkComponent, DiffractionMaxEdges) == 0x000268, "Member 'UAkComponent::DiffractionMaxEdges' has a wrong offset!");
static_assert(offsetof(UAkComponent, DiffractionMaxPaths) == 0x00026C, "Member 'UAkComponent::DiffractionMaxPaths' has a wrong offset!");
static_assert(offsetof(UAkComponent, DiffractionMaxPathLength) == 0x000270, "Member 'UAkComponent::DiffractionMaxPathLength' has a wrong offset!");
static_assert(offsetof(UAkComponent, StopWhenOwnerDestroyed) == 0x000278, "Member 'UAkComponent::StopWhenOwnerDestroyed' has a wrong offset!");
static_assert(offsetof(UAkComponent, CanReuse) == 0x000279, "Member 'UAkComponent::CanReuse' has a wrong offset!");
static_assert(offsetof(UAkComponent, AttenuationScalingFactor) == 0x00027C, "Member 'UAkComponent::AttenuationScalingFactor' has a wrong offset!");
static_assert(offsetof(UAkComponent, OcclusionRefreshInterval) == 0x000280, "Member 'UAkComponent::OcclusionRefreshInterval' has a wrong offset!");
static_assert(offsetof(UAkComponent, bUseReverbVolumes) == 0x000284, "Member 'UAkComponent::bUseReverbVolumes' has a wrong offset!");

// Class AkAudio.AkAudioInputComponent
// 0x0030 (0x0420 - 0x03F0)
class UAkAudioInputComponent : public UAkComponent
{
public:
	uint8                                         Pad_1FEA[0x30];                                    // 0x03F0(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	int32 PostAssociatedAudioInputEvent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAudioInputComponent">();
	}
	static class UAkAudioInputComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAudioInputComponent>();
	}
};
static_assert(alignof(UAkAudioInputComponent) == 0x000010, "Wrong alignment on UAkAudioInputComponent");
static_assert(sizeof(UAkAudioInputComponent) == 0x000420, "Wrong size on UAkAudioInputComponent");

// Class AkAudio.AkAuxBus
// 0x0008 (0x0058 - 0x0050)
class UAkAuxBus final : public UAkAssetBase
{
public:
	class UAkAudioBank*                           RequiredBank;                                      // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkAuxBus">();
	}
	static class UAkAuxBus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkAuxBus>();
	}
};
static_assert(alignof(UAkAuxBus) == 0x000008, "Wrong alignment on UAkAuxBus");
static_assert(sizeof(UAkAuxBus) == 0x000058, "Wrong size on UAkAuxBus");
static_assert(offsetof(UAkAuxBus, RequiredBank) == 0x000050, "Member 'UAkAuxBus::RequiredBank' has a wrong offset!");

// Class AkAudio.AkCheckBox
// 0x0A20 (0x0B58 - 0x0138)
class UAkCheckBox final : public UContentWidget
{
public:
	uint8                                         Pad_1FEB[0x3B0];                                   // 0x0138(0x03B0)(Fixing Size After Last Property [ Dumper-7 ])
	ECheckBoxState                                CheckedState;                                      // 0x04E8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FEC[0x3];                                     // 0x04E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             CheckedStateDelegate;                              // 0x04EC(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FED[0x4];                                     // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCheckBoxStyle                         WidgetStyle;                                       // 0x0500(0x0580)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EHorizontalAlignment                          HorizontalAlignment;                               // 0x0A80(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFocusable;                                       // 0x0A81(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FEE[0x6];                                     // 0x0A82(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkBoolPropertyToControl               ThePropertyToControl;                              // 0x0A88(0x0010)(Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                  ItemToControl;                                     // 0x0A98(0x0040)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             AkOnCheckStateChanged;                             // 0x0AD8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnItemDropped;                                     // 0x0AE8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPropertyDropped;                                 // 0x0AF8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FEF[0x50];                                    // 0x0B08(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAkBoolProperty(const class FString& ItemProperty);
	void SetAkItemId(const struct FGuid& ItemId);
	void SetCheckedState(ECheckBoxState InCheckedState);
	void SetIsChecked(bool InIsChecked);

	const struct FGuid GetAkItemId() const;
	const class FString GetAkProperty() const;
	ECheckBoxState GetCheckedState() const;
	bool IsChecked() const;
	bool IsPressed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkCheckBox">();
	}
	static class UAkCheckBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkCheckBox>();
	}
};
static_assert(alignof(UAkCheckBox) == 0x000008, "Wrong alignment on UAkCheckBox");
static_assert(sizeof(UAkCheckBox) == 0x000B58, "Wrong size on UAkCheckBox");
static_assert(offsetof(UAkCheckBox, CheckedState) == 0x0004E8, "Member 'UAkCheckBox::CheckedState' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, CheckedStateDelegate) == 0x0004EC, "Member 'UAkCheckBox::CheckedStateDelegate' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, WidgetStyle) == 0x000500, "Member 'UAkCheckBox::WidgetStyle' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, HorizontalAlignment) == 0x000A80, "Member 'UAkCheckBox::HorizontalAlignment' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, IsFocusable) == 0x000A81, "Member 'UAkCheckBox::IsFocusable' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, ThePropertyToControl) == 0x000A88, "Member 'UAkCheckBox::ThePropertyToControl' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, ItemToControl) == 0x000A98, "Member 'UAkCheckBox::ItemToControl' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, AkOnCheckStateChanged) == 0x000AD8, "Member 'UAkCheckBox::AkOnCheckStateChanged' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, OnItemDropped) == 0x000AE8, "Member 'UAkCheckBox::OnItemDropped' has a wrong offset!");
static_assert(offsetof(UAkCheckBox, OnPropertyDropped) == 0x000AF8, "Member 'UAkCheckBox::OnPropertyDropped' has a wrong offset!");

// Class AkAudio.DrawPortalComponent
// 0x0000 (0x0470 - 0x0470)
class UDrawPortalComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DrawPortalComponent">();
	}
	static class UDrawPortalComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDrawPortalComponent>();
	}
};
static_assert(alignof(UDrawPortalComponent) == 0x000010, "Wrong alignment on UDrawPortalComponent");
static_assert(sizeof(UDrawPortalComponent) == 0x000470, "Wrong size on UDrawPortalComponent");

// Class AkAudio.DrawRoomComponent
// 0x0000 (0x0470 - 0x0470)
class UDrawRoomComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DrawRoomComponent">();
	}
	static class UDrawRoomComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDrawRoomComponent>();
	}
};
static_assert(alignof(UDrawRoomComponent) == 0x000010, "Wrong alignment on UDrawRoomComponent");
static_assert(sizeof(UDrawRoomComponent) == 0x000470, "Wrong size on UDrawRoomComponent");

// Class AkAudio.AkFolder
// 0x0078 (0x00B8 - 0x0040)
class UAkFolder final : public UAkAudioType
{
public:
	class FString                                 UnrealFolderPath;                                  // 0x0040(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 WwiseFolderPath;                                   // 0x0050(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1FF0[0x58];                                    // 0x0060(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkFolder">();
	}
	static class UAkFolder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkFolder>();
	}
};
static_assert(alignof(UAkFolder) == 0x000008, "Wrong alignment on UAkFolder");
static_assert(sizeof(UAkFolder) == 0x0000B8, "Wrong size on UAkFolder");
static_assert(offsetof(UAkFolder, UnrealFolderPath) == 0x000040, "Member 'UAkFolder::UnrealFolderPath' has a wrong offset!");
static_assert(offsetof(UAkFolder, WwiseFolderPath) == 0x000050, "Member 'UAkFolder::WwiseFolderPath' has a wrong offset!");

// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics final : public UBlueprintFunctionLibrary
{
public:
	static void AddOutputCaptureMarker(const class FString& MarkerText);
	static void CancelEventCallback(const TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)>& PostEventCallback);
	static void ClearBanks();
	static void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID);
	static void ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve);
	static class UObject* GetAkAudioTypeUserData(const class UAkAudioType* Instance, const class UClass* Type);
	static class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, class FName AttachPointName, const struct FVector& Location, EAttachLocation LocationType);
	static class UObject* GetAkMediaAssetUserData(const class UAkMediaAsset* Instance, const class UClass* Type);
	static TArray<class FString> GetAvailableAudioCultures();
	static class FString GetCurrentAudioCulture();
	static float GetOcclusionScalingFactor();
	static void GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, class AActor* Actor, class FName RTPC);
	static void GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset);
	static bool IsEditor();
	static bool IsGame(class UObject* WorldContextObject);
	static void LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	static void LoadBankAsync(class UAkAudioBank* Bank, const TDelegate<void(EAkResult Result)>& BankLoadedCallback);
	static void LoadBankByName(const class FString& BankName);
	static void LoadBanks(const TArray<class UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
	static void LoadInitBank();
	static int32 PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo);
	static void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32* PlayingID, bool bStopWhenAttachedToDestroyed, const TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo);
	static int32 PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, const TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)>& PostEventCallback, const TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
	static int32 PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
	static void PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	static int32 PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, class FName AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
	static void PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	static void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, class FName Trigger);
	static void ReplaceMainOutput(const struct FAkOutputSettings& MainOutputSettings);
	static void ResetRTPCValue(class UAkRtpc* RTPCValue, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC);
	static void SetBusConfig(const class FString& BusName, EAkChannelConfiguration ChannelConfiguration);
	static void SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	static void SetCurrentAudioCultureAsync(const class FString& AudioCulture, const TDelegate<void(bool Succeeded)>& Completed);
	static void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue);
	static void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<EAkChannelConfiguration>& ChannelMasks, const TArray<struct FTransform>& Positions, EAkMultiPositionType MultiPositionType);
	static void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FAkChannelMask>& ChannelMasks, const TArray<struct FTransform>& Positions, EAkMultiPositionType MultiPositionType);
	static void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FTransform>& Positions, EAkMultiPositionType MultiPositionType);
	static void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	static void SetOcclusionScalingFactor(float ScalingFactor);
	static void SetOutputBusVolume(float BusVolume, class AActor* Actor);
	static void SetPanningRule(EPanningRule PanRule);
	static void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
	static void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue);
	static void SetReflectionsOrder(int32 Order, bool RefreshPaths);
	static void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC);
	static void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const class FString& DeviceShareset);
	static void SetState(class UAkStateValue* StateValue, class FName StateGroup, class FName State);
	static void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, class FName SwitchGroup, class FName SwitchState);
	static class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
	static void StartAllAmbientSounds(class UObject* WorldContextObject);
	static void StartOutputCapture(const class FString& Filename);
	static void StartProfilerCapture(const class FString& Filename);
	static void StopActor(class AActor* Actor);
	static void StopAll();
	static void StopAllAmbientSounds(class UObject* WorldContextObject);
	static void StopOutputCapture();
	static void StopProfilerCapture();
	static void UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	static void UnloadBankAsync(class UAkAudioBank* Bank, const TDelegate<void(EAkResult Result)>& BankUnloadedCallback);
	static void UnloadBankByName(const class FString& BankName);
	static void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
	static void UseReverbVolumes(bool InUseReverbVolumes, class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkGameplayStatics">();
	}
	static class UAkGameplayStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkGameplayStatics>();
	}
};
static_assert(alignof(UAkGameplayStatics) == 0x000008, "Wrong alignment on UAkGameplayStatics");
static_assert(sizeof(UAkGameplayStatics) == 0x000028, "Wrong size on UAkGameplayStatics");

// Class AkAudio.AkCallbackInfo
// 0x0008 (0x0030 - 0x0028)
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                           AkComponent;                                       // 0x0028(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkCallbackInfo">();
	}
	static class UAkCallbackInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkCallbackInfo>();
	}
};
static_assert(alignof(UAkCallbackInfo) == 0x000008, "Wrong alignment on UAkCallbackInfo");
static_assert(sizeof(UAkCallbackInfo) == 0x000030, "Wrong size on UAkCallbackInfo");
static_assert(offsetof(UAkCallbackInfo, AkComponent) == 0x000028, "Member 'UAkCallbackInfo::AkComponent' has a wrong offset!");

// Class AkAudio.AkEventCallbackInfo
// 0x0008 (0x0038 - 0x0030)
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                         PlayingID;                                         // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         EventId;                                           // 0x0034(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkEventCallbackInfo">();
	}
	static class UAkEventCallbackInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkEventCallbackInfo>();
	}
};
static_assert(alignof(UAkEventCallbackInfo) == 0x000008, "Wrong alignment on UAkEventCallbackInfo");
static_assert(sizeof(UAkEventCallbackInfo) == 0x000038, "Wrong size on UAkEventCallbackInfo");
static_assert(offsetof(UAkEventCallbackInfo, PlayingID) == 0x000030, "Member 'UAkEventCallbackInfo::PlayingID' has a wrong offset!");
static_assert(offsetof(UAkEventCallbackInfo, EventId) == 0x000034, "Member 'UAkEventCallbackInfo::EventId' has a wrong offset!");

// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0010 (0x0048 - 0x0038)
class UAkMIDIEventCallbackInfo final : public UAkEventCallbackInfo
{
public:
	uint8                                         Pad_2016[0x10];                                    // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool GetCc(struct FAkMidiCc* AsCc);
	uint8 GetChannel();
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	EAkMidiEventType GetType();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkMIDIEventCallbackInfo">();
	}
	static class UAkMIDIEventCallbackInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkMIDIEventCallbackInfo>();
	}
};
static_assert(alignof(UAkMIDIEventCallbackInfo) == 0x000008, "Wrong alignment on UAkMIDIEventCallbackInfo");
static_assert(sizeof(UAkMIDIEventCallbackInfo) == 0x000048, "Wrong size on UAkMIDIEventCallbackInfo");

// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkMarkerCallbackInfo final : public UAkEventCallbackInfo
{
public:
	int32                                         Identifier;                                        // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Position;                                          // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Label;                                             // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkMarkerCallbackInfo">();
	}
	static class UAkMarkerCallbackInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkMarkerCallbackInfo>();
	}
};
static_assert(alignof(UAkMarkerCallbackInfo) == 0x000008, "Wrong alignment on UAkMarkerCallbackInfo");
static_assert(sizeof(UAkMarkerCallbackInfo) == 0x000050, "Wrong size on UAkMarkerCallbackInfo");
static_assert(offsetof(UAkMarkerCallbackInfo, Identifier) == 0x000038, "Member 'UAkMarkerCallbackInfo::Identifier' has a wrong offset!");
static_assert(offsetof(UAkMarkerCallbackInfo, Position) == 0x00003C, "Member 'UAkMarkerCallbackInfo::Position' has a wrong offset!");
static_assert(offsetof(UAkMarkerCallbackInfo, Label) == 0x000040, "Member 'UAkMarkerCallbackInfo::Label' has a wrong offset!");

// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkDurationCallbackInfo final : public UAkEventCallbackInfo
{
public:
	float                                         Duration;                                          // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EstimatedDuration;                                 // 0x003C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AudioNodeID;                                       // 0x0040(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MediaID;                                           // 0x0044(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bStreaming;                                        // 0x0048(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2018[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkDurationCallbackInfo">();
	}
	static class UAkDurationCallbackInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkDurationCallbackInfo>();
	}
};
static_assert(alignof(UAkDurationCallbackInfo) == 0x000008, "Wrong alignment on UAkDurationCallbackInfo");
static_assert(sizeof(UAkDurationCallbackInfo) == 0x000050, "Wrong size on UAkDurationCallbackInfo");
static_assert(offsetof(UAkDurationCallbackInfo, Duration) == 0x000038, "Member 'UAkDurationCallbackInfo::Duration' has a wrong offset!");
static_assert(offsetof(UAkDurationCallbackInfo, EstimatedDuration) == 0x00003C, "Member 'UAkDurationCallbackInfo::EstimatedDuration' has a wrong offset!");
static_assert(offsetof(UAkDurationCallbackInfo, AudioNodeID) == 0x000040, "Member 'UAkDurationCallbackInfo::AudioNodeID' has a wrong offset!");
static_assert(offsetof(UAkDurationCallbackInfo, MediaID) == 0x000044, "Member 'UAkDurationCallbackInfo::MediaID' has a wrong offset!");
static_assert(offsetof(UAkDurationCallbackInfo, bStreaming) == 0x000048, "Member 'UAkDurationCallbackInfo::bStreaming' has a wrong offset!");

// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (0x0070 - 0x0030)
class UAkMusicSyncCallbackInfo final : public UAkCallbackInfo
{
public:
	int32                                         PlayingID;                                         // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkSegmentInfo                         SegmentInfo;                                       // 0x0034(0x0024)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	EAkCallbackType                               MusicSyncType;                                     // 0x0058(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2019[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UserCueName;                                       // 0x0060(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkMusicSyncCallbackInfo">();
	}
	static class UAkMusicSyncCallbackInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkMusicSyncCallbackInfo>();
	}
};
static_assert(alignof(UAkMusicSyncCallbackInfo) == 0x000008, "Wrong alignment on UAkMusicSyncCallbackInfo");
static_assert(sizeof(UAkMusicSyncCallbackInfo) == 0x000070, "Wrong size on UAkMusicSyncCallbackInfo");
static_assert(offsetof(UAkMusicSyncCallbackInfo, PlayingID) == 0x000030, "Member 'UAkMusicSyncCallbackInfo::PlayingID' has a wrong offset!");
static_assert(offsetof(UAkMusicSyncCallbackInfo, SegmentInfo) == 0x000034, "Member 'UAkMusicSyncCallbackInfo::SegmentInfo' has a wrong offset!");
static_assert(offsetof(UAkMusicSyncCallbackInfo, MusicSyncType) == 0x000058, "Member 'UAkMusicSyncCallbackInfo::MusicSyncType' has a wrong offset!");
static_assert(offsetof(UAkMusicSyncCallbackInfo, UserCueName) == 0x000060, "Member 'UAkMusicSyncCallbackInfo::UserCueName' has a wrong offset!");

// Class AkAudio.AkGeometryComponent
// 0x0190 (0x03B0 - 0x0220)
class UAkGeometryComponent final : public UAkAcousticTextureSetComponent
{
public:
	EAkMeshType                                   MeshType;                                          // 0x0220(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_201A[0x3];                                     // 0x0221(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LOD;                                               // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WeldingThreshold;                                  // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_201B[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                         // 0x0230(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAkGeometrySurfaceOverride             CollisionMeshSurfaceOverride;                      // 0x0280(0x0018)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bEnableDiffraction : 1;                            // 0x0298(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableDiffractionOnBoundaryEdges : 1;             // 0x0298(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_201C[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 AssociatedRoom;                                    // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_201D[0x10];                                    // 0x02A8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkGeometryData                        GeometryData;                                      // 0x02B8(0x0050)(NativeAccessSpecifierPrivate)
	TMap<int32, double>                           SurfaceAreas;                                      // 0x0308(0x0050)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_201E[0x58];                                    // 0x0358(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ConvertMesh();
	void RemoveGeometry();
	void SendGeometry();
	void UpdateGeometry();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkGeometryComponent">();
	}
	static class UAkGeometryComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkGeometryComponent>();
	}
};
static_assert(alignof(UAkGeometryComponent) == 0x000010, "Wrong alignment on UAkGeometryComponent");
static_assert(sizeof(UAkGeometryComponent) == 0x0003B0, "Wrong size on UAkGeometryComponent");
static_assert(offsetof(UAkGeometryComponent, MeshType) == 0x000220, "Member 'UAkGeometryComponent::MeshType' has a wrong offset!");
static_assert(offsetof(UAkGeometryComponent, LOD) == 0x000224, "Member 'UAkGeometryComponent::LOD' has a wrong offset!");
static_assert(offsetof(UAkGeometryComponent, WeldingThreshold) == 0x000228, "Member 'UAkGeometryComponent::WeldingThreshold' has a wrong offset!");
static_assert(offsetof(UAkGeometryComponent, StaticMeshSurfaceOverride) == 0x000230, "Member 'UAkGeometryComponent::StaticMeshSurfaceOverride' has a wrong offset!");
static_assert(offsetof(UAkGeometryComponent, CollisionMeshSurfaceOverride) == 0x000280, "Member 'UAkGeometryComponent::CollisionMeshSurfaceOverride' has a wrong offset!");
static_assert(offsetof(UAkGeometryComponent, AssociatedRoom) == 0x0002A0, "Member 'UAkGeometryComponent::AssociatedRoom' has a wrong offset!");
static_assert(offsetof(UAkGeometryComponent, GeometryData) == 0x0002B8, "Member 'UAkGeometryComponent::GeometryData' has a wrong offset!");
static_assert(offsetof(UAkGeometryComponent, SurfaceAreas) == 0x000308, "Member 'UAkGeometryComponent::SurfaceAreas' has a wrong offset!");

// Class AkAudio.AkGroupValue
// 0x0028 (0x0068 - 0x0040)
class UAkGroupValue : public UAkAudioType
{
public:
	TArray<TSoftObjectPtr<class UAkMediaAsset>>   MediaDependencies;                                 // 0x0040(0x0010)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	uint32                                        GroupShortID;                                      // 0x0050(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_201F[0x14];                                    // 0x0054(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkGroupValue">();
	}
	static class UAkGroupValue* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkGroupValue>();
	}
};
static_assert(alignof(UAkGroupValue) == 0x000008, "Wrong alignment on UAkGroupValue");
static_assert(sizeof(UAkGroupValue) == 0x000068, "Wrong size on UAkGroupValue");
static_assert(offsetof(UAkGroupValue, MediaDependencies) == 0x000040, "Member 'UAkGroupValue::MediaDependencies' has a wrong offset!");
static_assert(offsetof(UAkGroupValue, GroupShortID) == 0x000050, "Member 'UAkGroupValue::GroupShortID' has a wrong offset!");

// Class AkAudio.AkHololensInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkHololensInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_2020[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x0030(0x0068)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0098(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings;                                  // 0x00C0(0x0034)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_2021[0x4];                                     // 0x00F4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkHololensInitializationSettings">();
	}
	static class UAkHololensInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkHololensInitializationSettings>();
	}
};
static_assert(alignof(UAkHololensInitializationSettings) == 0x000008, "Wrong alignment on UAkHololensInitializationSettings");
static_assert(sizeof(UAkHololensInitializationSettings) == 0x0000F8, "Wrong size on UAkHololensInitializationSettings");
static_assert(offsetof(UAkHololensInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkHololensInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkHololensInitializationSettings, CommunicationSettings) == 0x000098, "Member 'UAkHololensInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkHololensInitializationSettings, AdvancedSettings) == 0x0000C0, "Member 'UAkHololensInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkHololensPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkHololensPlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkHololensPlatformInfo">();
	}
	static class UAkHololensPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkHololensPlatformInfo>();
	}
};
static_assert(alignof(UAkHololensPlatformInfo) == 0x000008, "Wrong alignment on UAkHololensPlatformInfo");
static_assert(sizeof(UAkHololensPlatformInfo) == 0x000070, "Wrong size on UAkHololensPlatformInfo");

// Class AkAudio.AkInitBankAssetData
// 0x0010 (0x0098 - 0x0088)
class UAkInitBankAssetData final : public UAkAssetDataWithMedia
{
public:
	TArray<struct FAkPluginInfo>                  PluginInfos;                                       // 0x0088(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkInitBankAssetData">();
	}
	static class UAkInitBankAssetData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkInitBankAssetData>();
	}
};
static_assert(alignof(UAkInitBankAssetData) == 0x000008, "Wrong alignment on UAkInitBankAssetData");
static_assert(sizeof(UAkInitBankAssetData) == 0x000098, "Wrong size on UAkInitBankAssetData");
static_assert(offsetof(UAkInitBankAssetData, PluginInfos) == 0x000088, "Member 'UAkInitBankAssetData::PluginInfos' has a wrong offset!");

// Class AkAudio.AkInitBank
// 0x0020 (0x0070 - 0x0050)
class UAkInitBank final : public UAkAssetBase
{
public:
	TArray<class FString>                         AvailableAudioCultures;                            // 0x0050(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class FString                                 DefaultLanguage;                                   // 0x0060(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkInitBank">();
	}
	static class UAkInitBank* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkInitBank>();
	}
};
static_assert(alignof(UAkInitBank) == 0x000008, "Wrong alignment on UAkInitBank");
static_assert(sizeof(UAkInitBank) == 0x000070, "Wrong size on UAkInitBank");
static_assert(offsetof(UAkInitBank, AvailableAudioCultures) == 0x000050, "Member 'UAkInitBank::AvailableAudioCultures' has a wrong offset!");
static_assert(offsetof(UAkInitBank, DefaultLanguage) == 0x000060, "Member 'UAkInitBank::DefaultLanguage' has a wrong offset!");

// Class AkAudio.AkIOSInitializationSettings
// 0x00D8 (0x0100 - 0x0028)
class UAkIOSInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_2022[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x0030(0x0068)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                        AudioSession;                                      // 0x0098(0x000C)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2023[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x00A8(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings      AdvancedSettings;                                  // 0x00D0(0x002C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_2024[0x4];                                     // 0x00FC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkIOSInitializationSettings">();
	}
	static class UAkIOSInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkIOSInitializationSettings>();
	}
};
static_assert(alignof(UAkIOSInitializationSettings) == 0x000008, "Wrong alignment on UAkIOSInitializationSettings");
static_assert(sizeof(UAkIOSInitializationSettings) == 0x000100, "Wrong size on UAkIOSInitializationSettings");
static_assert(offsetof(UAkIOSInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkIOSInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkIOSInitializationSettings, AudioSession) == 0x000098, "Member 'UAkIOSInitializationSettings::AudioSession' has a wrong offset!");
static_assert(offsetof(UAkIOSInitializationSettings, CommunicationSettings) == 0x0000A8, "Member 'UAkIOSInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkIOSInitializationSettings, AdvancedSettings) == 0x0000D0, "Member 'UAkIOSInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkIOSPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkIOSPlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkIOSPlatformInfo">();
	}
	static class UAkIOSPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkIOSPlatformInfo>();
	}
};
static_assert(alignof(UAkIOSPlatformInfo) == 0x000008, "Wrong alignment on UAkIOSPlatformInfo");
static_assert(sizeof(UAkIOSPlatformInfo) == 0x000070, "Wrong size on UAkIOSPlatformInfo");

// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemBoolPropertiesConv final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	static class FText Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkItemBoolPropertiesConv">();
	}
	static class UAkItemBoolPropertiesConv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkItemBoolPropertiesConv>();
	}
};
static_assert(alignof(UAkItemBoolPropertiesConv) == 0x000008, "Wrong alignment on UAkItemBoolPropertiesConv");
static_assert(sizeof(UAkItemBoolPropertiesConv) == 0x000028, "Wrong size on UAkItemBoolPropertiesConv");

// Class AkAudio.AkItemBoolProperties
// 0x0040 (0x0160 - 0x0120)
class UAkItemBoolProperties final : public UWidget
{
public:
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0120(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPropertyDragged;                                 // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2025[0x20];                                    // 0x0140(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetSearchText(const class FString& NewText);

	class FString GetSearchText() const;
	class FString GetSelectedProperty() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkItemBoolProperties">();
	}
	static class UAkItemBoolProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkItemBoolProperties>();
	}
};
static_assert(alignof(UAkItemBoolProperties) == 0x000008, "Wrong alignment on UAkItemBoolProperties");
static_assert(sizeof(UAkItemBoolProperties) == 0x000160, "Wrong size on UAkItemBoolProperties");
static_assert(offsetof(UAkItemBoolProperties, OnSelectionChanged) == 0x000120, "Member 'UAkItemBoolProperties::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UAkItemBoolProperties, OnPropertyDragged) == 0x000130, "Member 'UAkItemBoolProperties::OnPropertyDragged' has a wrong offset!");

// Class AkAudio.AkItemPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemPropertiesConv final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
	static class FText Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkItemPropertiesConv">();
	}
	static class UAkItemPropertiesConv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkItemPropertiesConv>();
	}
};
static_assert(alignof(UAkItemPropertiesConv) == 0x000008, "Wrong alignment on UAkItemPropertiesConv");
static_assert(sizeof(UAkItemPropertiesConv) == 0x000028, "Wrong size on UAkItemPropertiesConv");

// Class AkAudio.AkItemProperties
// 0x0040 (0x0160 - 0x0120)
class UAkItemProperties final : public UWidget
{
public:
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0120(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPropertyDragged;                                 // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2026[0x20];                                    // 0x0140(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetSearchText(const class FString& NewText);

	class FString GetSearchText() const;
	class FString GetSelectedProperty() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkItemProperties">();
	}
	static class UAkItemProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkItemProperties>();
	}
};
static_assert(alignof(UAkItemProperties) == 0x000008, "Wrong alignment on UAkItemProperties");
static_assert(sizeof(UAkItemProperties) == 0x000160, "Wrong size on UAkItemProperties");
static_assert(offsetof(UAkItemProperties, OnSelectionChanged) == 0x000120, "Member 'UAkItemProperties::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UAkItemProperties, OnPropertyDragged) == 0x000130, "Member 'UAkItemProperties::OnPropertyDragged' has a wrong offset!");

// Class AkAudio.AkLateReverbComponent
// 0x0080 (0x0290 - 0x0210)
class UAkLateReverbComponent final : public USceneComponent
{
public:
	uint8                                         bEnable : 1;                                       // 0x0208(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2027[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SendLevel;                                         // 0x020C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeRate;                                          // 0x0210(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Priority;                                          // 0x0214(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoAssignAuxBus;                                  // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2028[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAuxBus*                              AuxBus;                                            // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AuxBusName;                                        // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2029[0x8];                                     // 0x0238(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAuxBus*                              AuxBusManual;                                      // 0x0240(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_202A[0x48];                                    // 0x0248(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* TextureSetComponent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkLateReverbComponent">();
	}
	static class UAkLateReverbComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkLateReverbComponent>();
	}
};
static_assert(alignof(UAkLateReverbComponent) == 0x000010, "Wrong alignment on UAkLateReverbComponent");
static_assert(sizeof(UAkLateReverbComponent) == 0x000290, "Wrong size on UAkLateReverbComponent");
static_assert(offsetof(UAkLateReverbComponent, SendLevel) == 0x00020C, "Member 'UAkLateReverbComponent::SendLevel' has a wrong offset!");
static_assert(offsetof(UAkLateReverbComponent, FadeRate) == 0x000210, "Member 'UAkLateReverbComponent::FadeRate' has a wrong offset!");
static_assert(offsetof(UAkLateReverbComponent, Priority) == 0x000214, "Member 'UAkLateReverbComponent::Priority' has a wrong offset!");
static_assert(offsetof(UAkLateReverbComponent, AutoAssignAuxBus) == 0x000218, "Member 'UAkLateReverbComponent::AutoAssignAuxBus' has a wrong offset!");
static_assert(offsetof(UAkLateReverbComponent, AuxBus) == 0x000220, "Member 'UAkLateReverbComponent::AuxBus' has a wrong offset!");
static_assert(offsetof(UAkLateReverbComponent, AuxBusName) == 0x000228, "Member 'UAkLateReverbComponent::AuxBusName' has a wrong offset!");
static_assert(offsetof(UAkLateReverbComponent, AuxBusManual) == 0x000240, "Member 'UAkLateReverbComponent::AuxBusManual' has a wrong offset!");

// Class AkAudio.AkLinuxAArch64PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkLinuxAArch64PlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkLinuxAArch64PlatformInfo">();
	}
	static class UAkLinuxAArch64PlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkLinuxAArch64PlatformInfo>();
	}
};
static_assert(alignof(UAkLinuxAArch64PlatformInfo) == 0x000008, "Wrong alignment on UAkLinuxAArch64PlatformInfo");
static_assert(sizeof(UAkLinuxAArch64PlatformInfo) == 0x000070, "Wrong size on UAkLinuxAArch64PlatformInfo");

// Class AkAudio.AkLinuxInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkLinuxInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_202B[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x0030(0x0068)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0098(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0x00C0(0x0030)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkLinuxInitializationSettings">();
	}
	static class UAkLinuxInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkLinuxInitializationSettings>();
	}
};
static_assert(alignof(UAkLinuxInitializationSettings) == 0x000008, "Wrong alignment on UAkLinuxInitializationSettings");
static_assert(sizeof(UAkLinuxInitializationSettings) == 0x0000F0, "Wrong size on UAkLinuxInitializationSettings");
static_assert(offsetof(UAkLinuxInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkLinuxInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkLinuxInitializationSettings, CommunicationSettings) == 0x000098, "Member 'UAkLinuxInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkLinuxInitializationSettings, AdvancedSettings) == 0x0000C0, "Member 'UAkLinuxInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkLinuxPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkLinuxPlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkLinuxPlatformInfo">();
	}
	static class UAkLinuxPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkLinuxPlatformInfo>();
	}
};
static_assert(alignof(UAkLinuxPlatformInfo) == 0x000008, "Wrong alignment on UAkLinuxPlatformInfo");
static_assert(sizeof(UAkLinuxPlatformInfo) == 0x000070, "Wrong size on UAkLinuxPlatformInfo");

// Class AkAudio.AkMacInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkMacInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_202C[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x0030(0x0068)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0098(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0x00C0(0x0030)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkMacInitializationSettings">();
	}
	static class UAkMacInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkMacInitializationSettings>();
	}
};
static_assert(alignof(UAkMacInitializationSettings) == 0x000008, "Wrong alignment on UAkMacInitializationSettings");
static_assert(sizeof(UAkMacInitializationSettings) == 0x0000F0, "Wrong size on UAkMacInitializationSettings");
static_assert(offsetof(UAkMacInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkMacInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkMacInitializationSettings, CommunicationSettings) == 0x000098, "Member 'UAkMacInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkMacInitializationSettings, AdvancedSettings) == 0x0000C0, "Member 'UAkMacInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkMacPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkMacPlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkMacPlatformInfo">();
	}
	static class UAkMacPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkMacPlatformInfo>();
	}
};
static_assert(alignof(UAkMacPlatformInfo) == 0x000008, "Wrong alignment on UAkMacPlatformInfo");
static_assert(sizeof(UAkMacPlatformInfo) == 0x000070, "Wrong size on UAkMacPlatformInfo");

// Class AkAudio.AkMediaAssetData
// 0x0040 (0x0068 - 0x0028)
class UAkMediaAssetData final : public UObject
{
public:
	bool                                          IsStreamed;                                        // 0x0028(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseDeviceMemory;                                   // 0x0029(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_202D[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Language;                                          // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_202E[0x28];                                    // 0x0040(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkMediaAssetData">();
	}
	static class UAkMediaAssetData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkMediaAssetData>();
	}
};
static_assert(alignof(UAkMediaAssetData) == 0x000008, "Wrong alignment on UAkMediaAssetData");
static_assert(sizeof(UAkMediaAssetData) == 0x000068, "Wrong size on UAkMediaAssetData");
static_assert(offsetof(UAkMediaAssetData, IsStreamed) == 0x000028, "Member 'UAkMediaAssetData::IsStreamed' has a wrong offset!");
static_assert(offsetof(UAkMediaAssetData, UseDeviceMemory) == 0x000029, "Member 'UAkMediaAssetData::UseDeviceMemory' has a wrong offset!");
static_assert(offsetof(UAkMediaAssetData, Language) == 0x000030, "Member 'UAkMediaAssetData::Language' has a wrong offset!");

// Class AkAudio.AkMediaAsset
// 0x0050 (0x0078 - 0x0028)
class UAkMediaAsset : public UObject
{
public:
	uint32                                        ID;                                                // 0x0028(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_202F[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MediaName;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoLoad;                                          // 0x0040(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2030[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UObject*>                        UserData;                                          // 0x0048(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 Language;                                          // 0x0058(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkMediaAssetData*                      CurrentMediaAssetData;                             // 0x0068(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2031[0x8];                                     // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkMediaAsset">();
	}
	static class UAkMediaAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkMediaAsset>();
	}
};
static_assert(alignof(UAkMediaAsset) == 0x000008, "Wrong alignment on UAkMediaAsset");
static_assert(sizeof(UAkMediaAsset) == 0x000078, "Wrong size on UAkMediaAsset");
static_assert(offsetof(UAkMediaAsset, ID) == 0x000028, "Member 'UAkMediaAsset::ID' has a wrong offset!");
static_assert(offsetof(UAkMediaAsset, MediaName) == 0x000030, "Member 'UAkMediaAsset::MediaName' has a wrong offset!");
static_assert(offsetof(UAkMediaAsset, AutoLoad) == 0x000040, "Member 'UAkMediaAsset::AutoLoad' has a wrong offset!");
static_assert(offsetof(UAkMediaAsset, UserData) == 0x000048, "Member 'UAkMediaAsset::UserData' has a wrong offset!");
static_assert(offsetof(UAkMediaAsset, Language) == 0x000058, "Member 'UAkMediaAsset::Language' has a wrong offset!");
static_assert(offsetof(UAkMediaAsset, CurrentMediaAssetData) == 0x000068, "Member 'UAkMediaAsset::CurrentMediaAssetData' has a wrong offset!");

// Class AkAudio.AkLocalizedMediaAsset
// 0x0000 (0x0078 - 0x0078)
class UAkLocalizedMediaAsset final : public UAkMediaAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkLocalizedMediaAsset">();
	}
	static class UAkLocalizedMediaAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkLocalizedMediaAsset>();
	}
};
static_assert(alignof(UAkLocalizedMediaAsset) == 0x000008, "Wrong alignment on UAkLocalizedMediaAsset");
static_assert(sizeof(UAkLocalizedMediaAsset) == 0x000078, "Wrong size on UAkLocalizedMediaAsset");

// Class AkAudio.AkExternalMediaAsset
// 0x0060 (0x00D8 - 0x0078)
class UAkExternalMediaAsset final : public UAkMediaAsset
{
public:
	uint8                                         Pad_2032[0x60];                                    // 0x0078(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkExternalMediaAsset">();
	}
	static class UAkExternalMediaAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkExternalMediaAsset>();
	}
};
static_assert(alignof(UAkExternalMediaAsset) == 0x000008, "Wrong alignment on UAkExternalMediaAsset");
static_assert(sizeof(UAkExternalMediaAsset) == 0x0000D8, "Wrong size on UAkExternalMediaAsset");

// Class AkAudio.AkPlatformInitialisationSettingsBase
// 0x0000 (0x0028 - 0x0028)
class IAkPlatformInitialisationSettingsBase final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkPlatformInitialisationSettingsBase">();
	}
	static class IAkPlatformInitialisationSettingsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAkPlatformInitialisationSettingsBase>();
	}
};
static_assert(alignof(IAkPlatformInitialisationSettingsBase) == 0x000008, "Wrong alignment on IAkPlatformInitialisationSettingsBase");
static_assert(sizeof(IAkPlatformInitialisationSettingsBase) == 0x000028, "Wrong size on IAkPlatformInitialisationSettingsBase");

// Class AkAudio.AkPS4InitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkPS4InitializationSettings final : public UObject
{
public:
	uint8                                         Pad_2033[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettings        CommonSettings;                                    // 0x0030(0x0060)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0090(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS4AdvancedInitializationSettings   AdvancedSettings;                                  // 0x00B8(0x0038)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkPS4InitializationSettings">();
	}
	static class UAkPS4InitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkPS4InitializationSettings>();
	}
};
static_assert(alignof(UAkPS4InitializationSettings) == 0x000008, "Wrong alignment on UAkPS4InitializationSettings");
static_assert(sizeof(UAkPS4InitializationSettings) == 0x0000F0, "Wrong size on UAkPS4InitializationSettings");
static_assert(offsetof(UAkPS4InitializationSettings, CommonSettings) == 0x000030, "Member 'UAkPS4InitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkPS4InitializationSettings, CommunicationSettings) == 0x000090, "Member 'UAkPS4InitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkPS4InitializationSettings, AdvancedSettings) == 0x0000B8, "Member 'UAkPS4InitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkPS4PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkPS4PlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkPS4PlatformInfo">();
	}
	static class UAkPS4PlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkPS4PlatformInfo>();
	}
};
static_assert(alignof(UAkPS4PlatformInfo) == 0x000008, "Wrong alignment on UAkPS4PlatformInfo");
static_assert(sizeof(UAkPS4PlatformInfo) == 0x000070, "Wrong size on UAkPS4PlatformInfo");

// Class AkAudio.AkPS5InitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkPS5InitializationSettings : public UObject
{
public:
	uint8                                         Pad_2034[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettings        CommonSettings;                                    // 0x0030(0x0060)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0090(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS5AdvancedInitializationSettings   AdvancedSettings;                                  // 0x00B8(0x0034)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_2035[0x4];                                     // 0x00EC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkPS5InitializationSettings">();
	}
	static class UAkPS5InitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkPS5InitializationSettings>();
	}
};
static_assert(alignof(UAkPS5InitializationSettings) == 0x000008, "Wrong alignment on UAkPS5InitializationSettings");
static_assert(sizeof(UAkPS5InitializationSettings) == 0x0000F0, "Wrong size on UAkPS5InitializationSettings");
static_assert(offsetof(UAkPS5InitializationSettings, CommonSettings) == 0x000030, "Member 'UAkPS5InitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkPS5InitializationSettings, CommunicationSettings) == 0x000090, "Member 'UAkPS5InitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkPS5InitializationSettings, AdvancedSettings) == 0x0000B8, "Member 'UAkPS5InitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkDPXInitializationSettings
// 0x0000 (0x00F0 - 0x00F0)
class UAkDPXInitializationSettings final : public UAkPS5InitializationSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkDPXInitializationSettings">();
	}
	static class UAkDPXInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkDPXInitializationSettings>();
	}
};
static_assert(alignof(UAkDPXInitializationSettings) == 0x000008, "Wrong alignment on UAkDPXInitializationSettings");
static_assert(sizeof(UAkDPXInitializationSettings) == 0x0000F0, "Wrong size on UAkDPXInitializationSettings");

// Class AkAudio.AkPS5PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkPS5PlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkPS5PlatformInfo">();
	}
	static class UAkPS5PlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkPS5PlatformInfo>();
	}
};
static_assert(alignof(UAkPS5PlatformInfo) == 0x000008, "Wrong alignment on UAkPS5PlatformInfo");
static_assert(sizeof(UAkPS5PlatformInfo) == 0x000070, "Wrong size on UAkPS5PlatformInfo");

// Class AkAudio.AkReverbVolume
// 0x0038 (0x0298 - 0x0260)
class AAkReverbVolume final : public AVolume
{
public:
	uint8                                         bEnabled : 1;                                      // 0x0260(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2036[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAuxBus*                              AuxBus;                                            // 0x0268(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 AuxBusName;                                        // 0x0270(0x0010)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SendLevel;                                         // 0x0280(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeRate;                                          // 0x0284(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Priority;                                          // 0x0288(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2037[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkLateReverbComponent*                 LateReverbComponent;                               // 0x0290(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkReverbVolume">();
	}
	static class AAkReverbVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAkReverbVolume>();
	}
};
static_assert(alignof(AAkReverbVolume) == 0x000008, "Wrong alignment on AAkReverbVolume");
static_assert(sizeof(AAkReverbVolume) == 0x000298, "Wrong size on AAkReverbVolume");
static_assert(offsetof(AAkReverbVolume, AuxBus) == 0x000268, "Member 'AAkReverbVolume::AuxBus' has a wrong offset!");
static_assert(offsetof(AAkReverbVolume, AuxBusName) == 0x000270, "Member 'AAkReverbVolume::AuxBusName' has a wrong offset!");
static_assert(offsetof(AAkReverbVolume, SendLevel) == 0x000280, "Member 'AAkReverbVolume::SendLevel' has a wrong offset!");
static_assert(offsetof(AAkReverbVolume, FadeRate) == 0x000284, "Member 'AAkReverbVolume::FadeRate' has a wrong offset!");
static_assert(offsetof(AAkReverbVolume, Priority) == 0x000288, "Member 'AAkReverbVolume::Priority' has a wrong offset!");
static_assert(offsetof(AAkReverbVolume, LateReverbComponent) == 0x000290, "Member 'AAkReverbVolume::LateReverbComponent' has a wrong offset!");

// Class AkAudio.AkSettings
// 0x02B8 (0x02E0 - 0x0028)
class UAkSettings final : public UObject
{
public:
	uint8                                         MaxSimultaneousReverbVolumes;                      // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2038[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFilePath                              WwiseProjectPath;                                  // 0x0030(0x0010)(Edit, Config, NativeAccessSpecifierPublic)
	struct FDirectoryPath                         WwiseSoundDataFolder;                              // 0x0040(0x0010)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          bAutoConnectToWAAPI;                               // 0x0050(0x0001)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionChannel                             DefaultOcclusionCollisionChannel;                  // 0x0051(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionChannel                             DefaultFitToGeometryCollisionChannel;              // 0x0052(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2039[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<TSoftObjectPtr<class UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap;                                     // 0x0058(0x0050)(Edit, EditFixedSize, Config, NativeAccessSpecifierPublic)
	float                                         GlobalDecayAbsorption;                             // 0x00A8(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_203A[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAkAuxBus>               DefaultReverbAuxBus;                               // 0x00B0(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<float, TSoftObjectPtr<class UAkAuxBus>>  EnvironmentDecayAuxBusMap;                         // 0x00D8(0x0050)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                 HFDampingName;                                     // 0x0128(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DecayEstimateName;                                 // 0x0138(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TimeToFirstReflectionName;                         // 0x0148(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                 HFDampingRTPC;                                     // 0x0158(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                 DecayEstimateRTPC;                                 // 0x0180(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                 TimeToFirstReflectionRTPC;                         // 0x01A8(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>           AudioInputEvent;                                   // 0x01D0(0x0028)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap;                          // 0x01F8(0x0050)(Config, NativeAccessSpecifierPublic)
	bool                                          SplitSwitchContainerMedia;                         // 0x0248(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          SplitMediaPerFolder;                               // 0x0249(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseEventBasedPackaging;                            // 0x024A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableAutomaticAssetSynchronization;               // 0x024B(0x0001)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_203B[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CommandletCommitMessage;                           // 0x0250(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>            UnrealCultureToWwiseCulture;                       // 0x0260(0x0050)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          AskedToUseNewAssetManagement;                      // 0x02B0(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableMultiCoreRendering;                         // 0x02B1(0x0001)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          MigratedEnableMultiCoreRendering;                  // 0x02B2(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FixupRedirectorsDuringMigration;                   // 0x02B3(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_203C[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDirectoryPath                         WwiseWindowsInstallationPath;                      // 0x02B8(0x0010)(Config, Deprecated, NativeAccessSpecifierPublic)
	struct FFilePath                              WwiseMacInstallationPath;                          // 0x02C8(0x0010)(Config, Deprecated, NativeAccessSpecifierPublic)
	uint8                                         Pad_203D[0x8];                                     // 0x02D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSettings">();
	}
	static class UAkSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkSettings>();
	}
};
static_assert(alignof(UAkSettings) == 0x000008, "Wrong alignment on UAkSettings");
static_assert(sizeof(UAkSettings) == 0x0002E0, "Wrong size on UAkSettings");
static_assert(offsetof(UAkSettings, MaxSimultaneousReverbVolumes) == 0x000028, "Member 'UAkSettings::MaxSimultaneousReverbVolumes' has a wrong offset!");
static_assert(offsetof(UAkSettings, WwiseProjectPath) == 0x000030, "Member 'UAkSettings::WwiseProjectPath' has a wrong offset!");
static_assert(offsetof(UAkSettings, WwiseSoundDataFolder) == 0x000040, "Member 'UAkSettings::WwiseSoundDataFolder' has a wrong offset!");
static_assert(offsetof(UAkSettings, bAutoConnectToWAAPI) == 0x000050, "Member 'UAkSettings::bAutoConnectToWAAPI' has a wrong offset!");
static_assert(offsetof(UAkSettings, DefaultOcclusionCollisionChannel) == 0x000051, "Member 'UAkSettings::DefaultOcclusionCollisionChannel' has a wrong offset!");
static_assert(offsetof(UAkSettings, DefaultFitToGeometryCollisionChannel) == 0x000052, "Member 'UAkSettings::DefaultFitToGeometryCollisionChannel' has a wrong offset!");
static_assert(offsetof(UAkSettings, AkGeometryMap) == 0x000058, "Member 'UAkSettings::AkGeometryMap' has a wrong offset!");
static_assert(offsetof(UAkSettings, GlobalDecayAbsorption) == 0x0000A8, "Member 'UAkSettings::GlobalDecayAbsorption' has a wrong offset!");
static_assert(offsetof(UAkSettings, DefaultReverbAuxBus) == 0x0000B0, "Member 'UAkSettings::DefaultReverbAuxBus' has a wrong offset!");
static_assert(offsetof(UAkSettings, EnvironmentDecayAuxBusMap) == 0x0000D8, "Member 'UAkSettings::EnvironmentDecayAuxBusMap' has a wrong offset!");
static_assert(offsetof(UAkSettings, HFDampingName) == 0x000128, "Member 'UAkSettings::HFDampingName' has a wrong offset!");
static_assert(offsetof(UAkSettings, DecayEstimateName) == 0x000138, "Member 'UAkSettings::DecayEstimateName' has a wrong offset!");
static_assert(offsetof(UAkSettings, TimeToFirstReflectionName) == 0x000148, "Member 'UAkSettings::TimeToFirstReflectionName' has a wrong offset!");
static_assert(offsetof(UAkSettings, HFDampingRTPC) == 0x000158, "Member 'UAkSettings::HFDampingRTPC' has a wrong offset!");
static_assert(offsetof(UAkSettings, DecayEstimateRTPC) == 0x000180, "Member 'UAkSettings::DecayEstimateRTPC' has a wrong offset!");
static_assert(offsetof(UAkSettings, TimeToFirstReflectionRTPC) == 0x0001A8, "Member 'UAkSettings::TimeToFirstReflectionRTPC' has a wrong offset!");
static_assert(offsetof(UAkSettings, AudioInputEvent) == 0x0001D0, "Member 'UAkSettings::AudioInputEvent' has a wrong offset!");
static_assert(offsetof(UAkSettings, AcousticTextureParamsMap) == 0x0001F8, "Member 'UAkSettings::AcousticTextureParamsMap' has a wrong offset!");
static_assert(offsetof(UAkSettings, SplitSwitchContainerMedia) == 0x000248, "Member 'UAkSettings::SplitSwitchContainerMedia' has a wrong offset!");
static_assert(offsetof(UAkSettings, SplitMediaPerFolder) == 0x000249, "Member 'UAkSettings::SplitMediaPerFolder' has a wrong offset!");
static_assert(offsetof(UAkSettings, UseEventBasedPackaging) == 0x00024A, "Member 'UAkSettings::UseEventBasedPackaging' has a wrong offset!");
static_assert(offsetof(UAkSettings, EnableAutomaticAssetSynchronization) == 0x00024B, "Member 'UAkSettings::EnableAutomaticAssetSynchronization' has a wrong offset!");
static_assert(offsetof(UAkSettings, CommandletCommitMessage) == 0x000250, "Member 'UAkSettings::CommandletCommitMessage' has a wrong offset!");
static_assert(offsetof(UAkSettings, UnrealCultureToWwiseCulture) == 0x000260, "Member 'UAkSettings::UnrealCultureToWwiseCulture' has a wrong offset!");
static_assert(offsetof(UAkSettings, AskedToUseNewAssetManagement) == 0x0002B0, "Member 'UAkSettings::AskedToUseNewAssetManagement' has a wrong offset!");
static_assert(offsetof(UAkSettings, bEnableMultiCoreRendering) == 0x0002B1, "Member 'UAkSettings::bEnableMultiCoreRendering' has a wrong offset!");
static_assert(offsetof(UAkSettings, MigratedEnableMultiCoreRendering) == 0x0002B2, "Member 'UAkSettings::MigratedEnableMultiCoreRendering' has a wrong offset!");
static_assert(offsetof(UAkSettings, FixupRedirectorsDuringMigration) == 0x0002B3, "Member 'UAkSettings::FixupRedirectorsDuringMigration' has a wrong offset!");
static_assert(offsetof(UAkSettings, WwiseWindowsInstallationPath) == 0x0002B8, "Member 'UAkSettings::WwiseWindowsInstallationPath' has a wrong offset!");
static_assert(offsetof(UAkSettings, WwiseMacInstallationPath) == 0x0002C8, "Member 'UAkSettings::WwiseMacInstallationPath' has a wrong offset!");

// Class AkAudio.AkSettingsPerUser
// 0x0060 (0x0088 - 0x0028)
class UAkSettingsPerUser final : public UObject
{
public:
	struct FDirectoryPath                         WwiseWindowsInstallationPath;                      // 0x0028(0x0010)(Edit, Config, NativeAccessSpecifierPublic)
	struct FFilePath                              WwiseMacInstallationPath;                          // 0x0038(0x0010)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                          EnableAutomaticAssetSynchronization;               // 0x0048(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_203E[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 WaapiIPAddress;                                    // 0x0050(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        WaapiPort;                                         // 0x0060(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoConnectToWAAPI;                               // 0x0064(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AutoSyncSelection;                                 // 0x0065(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          GenerateSoundOnlyJapanese;                         // 0x0066(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          SuppressWwiseProjectPathWarnings;                  // 0x0067(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          SoundDataGenerationSkipLanguage;                   // 0x0068(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_203F[0x1F];                                    // 0x0069(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSettingsPerUser">();
	}
	static class UAkSettingsPerUser* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkSettingsPerUser>();
	}
};
static_assert(alignof(UAkSettingsPerUser) == 0x000008, "Wrong alignment on UAkSettingsPerUser");
static_assert(sizeof(UAkSettingsPerUser) == 0x000088, "Wrong size on UAkSettingsPerUser");
static_assert(offsetof(UAkSettingsPerUser, WwiseWindowsInstallationPath) == 0x000028, "Member 'UAkSettingsPerUser::WwiseWindowsInstallationPath' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, WwiseMacInstallationPath) == 0x000038, "Member 'UAkSettingsPerUser::WwiseMacInstallationPath' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, EnableAutomaticAssetSynchronization) == 0x000048, "Member 'UAkSettingsPerUser::EnableAutomaticAssetSynchronization' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, WaapiIPAddress) == 0x000050, "Member 'UAkSettingsPerUser::WaapiIPAddress' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, WaapiPort) == 0x000060, "Member 'UAkSettingsPerUser::WaapiPort' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, bAutoConnectToWAAPI) == 0x000064, "Member 'UAkSettingsPerUser::bAutoConnectToWAAPI' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, AutoSyncSelection) == 0x000065, "Member 'UAkSettingsPerUser::AutoSyncSelection' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, GenerateSoundOnlyJapanese) == 0x000066, "Member 'UAkSettingsPerUser::GenerateSoundOnlyJapanese' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, SuppressWwiseProjectPathWarnings) == 0x000067, "Member 'UAkSettingsPerUser::SuppressWwiseProjectPathWarnings' has a wrong offset!");
static_assert(offsetof(UAkSettingsPerUser, SoundDataGenerationSkipLanguage) == 0x000068, "Member 'UAkSettingsPerUser::SoundDataGenerationSkipLanguage' has a wrong offset!");

// Class AkAudio.AkSlider
// 0x0428 (0x0548 - 0x0120)
class UAkSlider final : public UWidget
{
public:
	float                                         Value;                                             // 0x0120(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             ValueDelegate;                                     // 0x0124(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2040[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSliderStyle                           WidgetStyle;                                       // 0x0138(0x0340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EOrientation                                  Orientation;                                       // 0x0478(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2041[0x3];                                     // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           SliderBarColor;                                    // 0x047C(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           SliderHandleColor;                                 // 0x048C(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IndentHandle;                                      // 0x049C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Locked;                                            // 0x049D(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2042[0x2];                                     // 0x049E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StepSize;                                          // 0x04A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFocusable;                                       // 0x04A4(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2043[0x3];                                     // 0x04A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkPropertyToControl                   ThePropertyToControl;                              // 0x04A8(0x0010)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                  ItemToControl;                                     // 0x04B8(0x0040)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnValueChanged;                                    // 0x04F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnItemDropped;                                     // 0x0508(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPropertyDropped;                                 // 0x0518(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2044[0x20];                                    // 0x0528(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetAkSliderItemId(const struct FGuid& ItemId);
	void SetAkSliderItemProperty(const class FString& ItemProperty);
	void SetIndentHandle(bool InValue);
	void SetLocked(bool InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetStepSize(float InValue);
	void SetValue(float InValue);

	const struct FGuid GetAkSliderItemId() const;
	const class FString GetAkSliderItemProperty() const;
	float GetValue() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSlider">();
	}
	static class UAkSlider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkSlider>();
	}
};
static_assert(alignof(UAkSlider) == 0x000008, "Wrong alignment on UAkSlider");
static_assert(sizeof(UAkSlider) == 0x000548, "Wrong size on UAkSlider");
static_assert(offsetof(UAkSlider, Value) == 0x000120, "Member 'UAkSlider::Value' has a wrong offset!");
static_assert(offsetof(UAkSlider, ValueDelegate) == 0x000124, "Member 'UAkSlider::ValueDelegate' has a wrong offset!");
static_assert(offsetof(UAkSlider, WidgetStyle) == 0x000138, "Member 'UAkSlider::WidgetStyle' has a wrong offset!");
static_assert(offsetof(UAkSlider, Orientation) == 0x000478, "Member 'UAkSlider::Orientation' has a wrong offset!");
static_assert(offsetof(UAkSlider, SliderBarColor) == 0x00047C, "Member 'UAkSlider::SliderBarColor' has a wrong offset!");
static_assert(offsetof(UAkSlider, SliderHandleColor) == 0x00048C, "Member 'UAkSlider::SliderHandleColor' has a wrong offset!");
static_assert(offsetof(UAkSlider, IndentHandle) == 0x00049C, "Member 'UAkSlider::IndentHandle' has a wrong offset!");
static_assert(offsetof(UAkSlider, Locked) == 0x00049D, "Member 'UAkSlider::Locked' has a wrong offset!");
static_assert(offsetof(UAkSlider, StepSize) == 0x0004A0, "Member 'UAkSlider::StepSize' has a wrong offset!");
static_assert(offsetof(UAkSlider, IsFocusable) == 0x0004A4, "Member 'UAkSlider::IsFocusable' has a wrong offset!");
static_assert(offsetof(UAkSlider, ThePropertyToControl) == 0x0004A8, "Member 'UAkSlider::ThePropertyToControl' has a wrong offset!");
static_assert(offsetof(UAkSlider, ItemToControl) == 0x0004B8, "Member 'UAkSlider::ItemToControl' has a wrong offset!");
static_assert(offsetof(UAkSlider, OnValueChanged) == 0x0004F8, "Member 'UAkSlider::OnValueChanged' has a wrong offset!");
static_assert(offsetof(UAkSlider, OnItemDropped) == 0x000508, "Member 'UAkSlider::OnItemDropped' has a wrong offset!");
static_assert(offsetof(UAkSlider, OnPropertyDropped) == 0x000518, "Member 'UAkSlider::OnPropertyDropped' has a wrong offset!");

// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (0x0278 - 0x0260)
class AAkSpatialAudioVolume final : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*        SurfaceReflectorSet;                               // 0x0260(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                 LateReverb;                                        // 0x0268(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRoomComponent*                       Room;                                              // 0x0270(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSpatialAudioVolume">();
	}
	static class AAkSpatialAudioVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAkSpatialAudioVolume>();
	}
};
static_assert(alignof(AAkSpatialAudioVolume) == 0x000008, "Wrong alignment on AAkSpatialAudioVolume");
static_assert(sizeof(AAkSpatialAudioVolume) == 0x000278, "Wrong size on AAkSpatialAudioVolume");
static_assert(offsetof(AAkSpatialAudioVolume, SurfaceReflectorSet) == 0x000260, "Member 'AAkSpatialAudioVolume::SurfaceReflectorSet' has a wrong offset!");
static_assert(offsetof(AAkSpatialAudioVolume, LateReverb) == 0x000268, "Member 'AAkSpatialAudioVolume::LateReverb' has a wrong offset!");
static_assert(offsetof(AAkSpatialAudioVolume, Room) == 0x000270, "Member 'AAkSpatialAudioVolume::Room' has a wrong offset!");

// Class AkAudio.AkSpotReflector
// 0x0028 (0x0250 - 0x0228)
class AAkSpotReflector final : public AActor
{
public:
	class UAkAuxBus*                              EarlyReflectionAuxBus;                             // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 EarlyReflectionAuxBusName;                         // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                     AcousticTexture;                                   // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DistanceScalingFactor;                             // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Level;                                             // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSpotReflector">();
	}
	static class AAkSpotReflector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAkSpotReflector>();
	}
};
static_assert(alignof(AAkSpotReflector) == 0x000008, "Wrong alignment on AAkSpotReflector");
static_assert(sizeof(AAkSpotReflector) == 0x000250, "Wrong size on AAkSpotReflector");
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBus) == 0x000228, "Member 'AAkSpotReflector::EarlyReflectionAuxBus' has a wrong offset!");
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBusName) == 0x000230, "Member 'AAkSpotReflector::EarlyReflectionAuxBusName' has a wrong offset!");
static_assert(offsetof(AAkSpotReflector, AcousticTexture) == 0x000240, "Member 'AAkSpotReflector::AcousticTexture' has a wrong offset!");
static_assert(offsetof(AAkSpotReflector, DistanceScalingFactor) == 0x000248, "Member 'AAkSpotReflector::DistanceScalingFactor' has a wrong offset!");
static_assert(offsetof(AAkSpotReflector, Level) == 0x00024C, "Member 'AAkSpotReflector::Level' has a wrong offset!");

// Class AkAudio.AkStateValue
// 0x0000 (0x0068 - 0x0068)
class UAkStateValue final : public UAkGroupValue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkStateValue">();
	}
	static class UAkStateValue* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkStateValue>();
	}
};
static_assert(alignof(UAkStateValue) == 0x000008, "Wrong alignment on UAkStateValue");
static_assert(sizeof(UAkStateValue) == 0x000068, "Wrong size on UAkStateValue");

// Class AkAudio.AkSubmixInputComponent
// 0x0060 (0x0480 - 0x0420)
class UAkSubmixInputComponent final : public UAkAudioInputComponent
{
public:
	uint8                                         Pad_2045[0x8];                                     // 0x0420(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundSubmix*                           SubmixToRecord;                                    // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2046[0x50];                                    // 0x0430(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSubmixInputComponent">();
	}
	static class UAkSubmixInputComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkSubmixInputComponent>();
	}
};
static_assert(alignof(UAkSubmixInputComponent) == 0x000010, "Wrong alignment on UAkSubmixInputComponent");
static_assert(sizeof(UAkSubmixInputComponent) == 0x000480, "Wrong size on UAkSubmixInputComponent");
static_assert(offsetof(UAkSubmixInputComponent, SubmixToRecord) == 0x000428, "Member 'UAkSubmixInputComponent::SubmixToRecord' has a wrong offset!");

// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0030 (0x0250 - 0x0220)
class UAkSurfaceReflectorSetComponent final : public UAkAcousticTextureSetComponent
{
public:
	uint8                                         bEnableSurfaceReflectors : 1;                      // 0x0220(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2047[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkSurfacePoly>                 AcousticPolys;                                     // 0x0228(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bEnableDiffraction : 1;                            // 0x0238(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bEnableDiffractionOnBoundaryEdges : 1;             // 0x0238(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2048[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 AssociatedRoom;                                    // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2049[0x8];                                     // 0x0248(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void RemoveSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void UpdateSurfaceReflectorSet();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSurfaceReflectorSetComponent">();
	}
	static class UAkSurfaceReflectorSetComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkSurfaceReflectorSetComponent>();
	}
};
static_assert(alignof(UAkSurfaceReflectorSetComponent) == 0x000010, "Wrong alignment on UAkSurfaceReflectorSetComponent");
static_assert(sizeof(UAkSurfaceReflectorSetComponent) == 0x000250, "Wrong size on UAkSurfaceReflectorSetComponent");
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AcousticPolys) == 0x000228, "Member 'UAkSurfaceReflectorSetComponent::AcousticPolys' has a wrong offset!");
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AssociatedRoom) == 0x000240, "Member 'UAkSurfaceReflectorSetComponent::AssociatedRoom' has a wrong offset!");

// Class AkAudio.AkSwitchInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkSwitchInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_204A[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x0030(0x0068)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings;                             // 0x0098(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0x00C0(0x0030)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSwitchInitializationSettings">();
	}
	static class UAkSwitchInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkSwitchInitializationSettings>();
	}
};
static_assert(alignof(UAkSwitchInitializationSettings) == 0x000008, "Wrong alignment on UAkSwitchInitializationSettings");
static_assert(sizeof(UAkSwitchInitializationSettings) == 0x0000F0, "Wrong size on UAkSwitchInitializationSettings");
static_assert(offsetof(UAkSwitchInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkSwitchInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkSwitchInitializationSettings, CommunicationSettings) == 0x000098, "Member 'UAkSwitchInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkSwitchInitializationSettings, AdvancedSettings) == 0x0000C0, "Member 'UAkSwitchInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkSwitchPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkSwitchPlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSwitchPlatformInfo">();
	}
	static class UAkSwitchPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkSwitchPlatformInfo>();
	}
};
static_assert(alignof(UAkSwitchPlatformInfo) == 0x000008, "Wrong alignment on UAkSwitchPlatformInfo");
static_assert(sizeof(UAkSwitchPlatformInfo) == 0x000070, "Wrong size on UAkSwitchPlatformInfo");

// Class AkAudio.AkSwitchValue
// 0x0000 (0x0068 - 0x0068)
class UAkSwitchValue final : public UAkGroupValue
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkSwitchValue">();
	}
	static class UAkSwitchValue* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkSwitchValue>();
	}
};
static_assert(alignof(UAkSwitchValue) == 0x000008, "Wrong alignment on UAkSwitchValue");
static_assert(sizeof(UAkSwitchValue) == 0x000068, "Wrong size on UAkSwitchValue");

// Class AkAudio.AkTrigger
// 0x0000 (0x0040 - 0x0040)
class UAkTrigger final : public UAkAudioType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkTrigger">();
	}
	static class UAkTrigger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkTrigger>();
	}
};
static_assert(alignof(UAkTrigger) == 0x000008, "Wrong alignment on UAkTrigger");
static_assert(sizeof(UAkTrigger) == 0x000040, "Wrong size on UAkTrigger");

// Class AkAudio.AkTVOSInitializationSettings
// 0x00D8 (0x0100 - 0x0028)
class UAkTVOSInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_204B[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x0030(0x0068)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                        AudioSession;                                      // 0x0098(0x000C)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_204C[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x00A8(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings      AdvancedSettings;                                  // 0x00D0(0x002C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_204D[0x4];                                     // 0x00FC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkTVOSInitializationSettings">();
	}
	static class UAkTVOSInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkTVOSInitializationSettings>();
	}
};
static_assert(alignof(UAkTVOSInitializationSettings) == 0x000008, "Wrong alignment on UAkTVOSInitializationSettings");
static_assert(sizeof(UAkTVOSInitializationSettings) == 0x000100, "Wrong size on UAkTVOSInitializationSettings");
static_assert(offsetof(UAkTVOSInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkTVOSInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkTVOSInitializationSettings, AudioSession) == 0x000098, "Member 'UAkTVOSInitializationSettings::AudioSession' has a wrong offset!");
static_assert(offsetof(UAkTVOSInitializationSettings, CommunicationSettings) == 0x0000A8, "Member 'UAkTVOSInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkTVOSInitializationSettings, AdvancedSettings) == 0x0000D0, "Member 'UAkTVOSInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkTVOSPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkTVOSPlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkTVOSPlatformInfo">();
	}
	static class UAkTVOSPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkTVOSPlatformInfo>();
	}
};
static_assert(alignof(UAkTVOSPlatformInfo) == 0x000008, "Wrong alignment on UAkTVOSPlatformInfo");
static_assert(sizeof(UAkTVOSPlatformInfo) == 0x000070, "Wrong size on UAkTVOSPlatformInfo");

// Class AkAudio.AkWaapiCalls
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiCalls final : public UBlueprintFunctionLibrary
{
public:
	static struct FAKWaapiJsonObject CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
	static class FString Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	static class FText Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	static int32 GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
	static bool RegisterWaapiConnectionLostCallback(const TDelegate<void()>& Callback);
	static bool RegisterWaapiProjectLoadedCallback(const TDelegate<void()>& Callback);
	static void SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32 ID);
	static struct FAKWaapiJsonObject SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const TDelegate<void(const struct FAkWaapiSubscriptionId& SubscriptionId, const struct FAKWaapiJsonObject& WaapiJsonObject)>& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	static struct FAKWaapiJsonObject Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWaapiCalls">();
	}
	static class UAkWaapiCalls* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWaapiCalls>();
	}
};
static_assert(alignof(UAkWaapiCalls) == 0x000008, "Wrong alignment on UAkWaapiCalls");
static_assert(sizeof(UAkWaapiCalls) == 0x000028, "Wrong size on UAkWaapiCalls");

// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (0x0028 - 0x0028)
class USAkWaapiFieldNamesConv final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	static class FText Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SAkWaapiFieldNamesConv">();
	}
	static class USAkWaapiFieldNamesConv* GetDefaultObj()
	{
		return GetDefaultObjImpl<USAkWaapiFieldNamesConv>();
	}
};
static_assert(alignof(USAkWaapiFieldNamesConv) == 0x000008, "Wrong alignment on USAkWaapiFieldNamesConv");
static_assert(sizeof(USAkWaapiFieldNamesConv) == 0x000028, "Wrong size on USAkWaapiFieldNamesConv");

// Class AkAudio.AkWaapiJsonManager
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiJsonManager final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	static class FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	static const TArray<struct FAKWaapiJsonObject> GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static bool GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static int32 GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static float GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static class FString GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, const TArray<struct FAKWaapiJsonObject>& FieldObjectValues, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, const TArray<class FString>& FieldStringValues, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
	static struct FAKWaapiJsonObject SetStringField(const struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWaapiJsonManager">();
	}
	static class UAkWaapiJsonManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWaapiJsonManager>();
	}
};
static_assert(alignof(UAkWaapiJsonManager) == 0x000008, "Wrong alignment on UAkWaapiJsonManager");
static_assert(sizeof(UAkWaapiJsonManager) == 0x000028, "Wrong size on UAkWaapiJsonManager");

// Class AkAudio.AkWaapiUriConv
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiUriConv final : public UBlueprintFunctionLibrary
{
public:
	static class FString Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
	static class FText Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWaapiUriConv">();
	}
	static class UAkWaapiUriConv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWaapiUriConv>();
	}
};
static_assert(alignof(UAkWaapiUriConv) == 0x000008, "Wrong alignment on UAkWaapiUriConv");
static_assert(sizeof(UAkWaapiUriConv) == 0x000028, "Wrong size on UAkWaapiUriConv");

// Class AkAudio.AkWindowsInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkWindowsInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_2059[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x0030(0x0068)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0098(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings;                                  // 0x00C0(0x0038)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWindowsInitializationSettings">();
	}
	static class UAkWindowsInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWindowsInitializationSettings>();
	}
};
static_assert(alignof(UAkWindowsInitializationSettings) == 0x000008, "Wrong alignment on UAkWindowsInitializationSettings");
static_assert(sizeof(UAkWindowsInitializationSettings) == 0x0000F8, "Wrong size on UAkWindowsInitializationSettings");
static_assert(offsetof(UAkWindowsInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkWindowsInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkWindowsInitializationSettings, CommunicationSettings) == 0x000098, "Member 'UAkWindowsInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkWindowsInitializationSettings, AdvancedSettings) == 0x0000C0, "Member 'UAkWindowsInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkWin32PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWin32PlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWin32PlatformInfo">();
	}
	static class UAkWin32PlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWin32PlatformInfo>();
	}
};
static_assert(alignof(UAkWin32PlatformInfo) == 0x000008, "Wrong alignment on UAkWin32PlatformInfo");
static_assert(sizeof(UAkWin32PlatformInfo) == 0x000070, "Wrong size on UAkWin32PlatformInfo");

// Class AkAudio.AkWin64PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWin64PlatformInfo">();
	}
	static class UAkWin64PlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWin64PlatformInfo>();
	}
};
static_assert(alignof(UAkWin64PlatformInfo) == 0x000008, "Wrong alignment on UAkWin64PlatformInfo");
static_assert(sizeof(UAkWin64PlatformInfo) == 0x000070, "Wrong size on UAkWin64PlatformInfo");

// Class AkAudio.AkWindowsPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWindowsPlatformInfo final : public UAkWin64PlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWindowsPlatformInfo">();
	}
	static class UAkWindowsPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWindowsPlatformInfo>();
	}
};
static_assert(alignof(UAkWindowsPlatformInfo) == 0x000008, "Wrong alignment on UAkWindowsPlatformInfo");
static_assert(sizeof(UAkWindowsPlatformInfo) == 0x000070, "Wrong size on UAkWindowsPlatformInfo");

// Class AkAudio.AkWwiseTree
// 0x0040 (0x0160 - 0x0120)
class UAkWwiseTree final : public UWidget
{
public:
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0120(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnItemDragged;                                     // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_205A[0x20];                                    // 0x0140(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetSearchText(const class FString& NewText);

	class FString GetSearchText() const;
	struct FAkWwiseObjectDetails GetSelectedItem() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWwiseTree">();
	}
	static class UAkWwiseTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWwiseTree>();
	}
};
static_assert(alignof(UAkWwiseTree) == 0x000008, "Wrong alignment on UAkWwiseTree");
static_assert(sizeof(UAkWwiseTree) == 0x000160, "Wrong size on UAkWwiseTree");
static_assert(offsetof(UAkWwiseTree, OnSelectionChanged) == 0x000120, "Member 'UAkWwiseTree::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UAkWwiseTree, OnItemDragged) == 0x000130, "Member 'UAkWwiseTree::OnItemDragged' has a wrong offset!");

// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (0x0180 - 0x0120)
class UAkWwiseTreeSelector final : public UWidget
{
public:
	FMulticastInlineDelegateProperty_             OnSelectionChanged;                                // 0x0120(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnItemDragged;                                     // 0x0130(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_205B[0x40];                                    // 0x0140(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkWwiseTreeSelector">();
	}
	static class UAkWwiseTreeSelector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkWwiseTreeSelector>();
	}
};
static_assert(alignof(UAkWwiseTreeSelector) == 0x000008, "Wrong alignment on UAkWwiseTreeSelector");
static_assert(sizeof(UAkWwiseTreeSelector) == 0x000180, "Wrong size on UAkWwiseTreeSelector");
static_assert(offsetof(UAkWwiseTreeSelector, OnSelectionChanged) == 0x000120, "Member 'UAkWwiseTreeSelector::OnSelectionChanged' has a wrong offset!");
static_assert(offsetof(UAkWwiseTreeSelector, OnItemDragged) == 0x000130, "Member 'UAkWwiseTreeSelector::OnItemDragged' has a wrong offset!");

// Class AkAudio.AkXboxOneInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkXboxOneInitializationSettings final : public UObject
{
public:
	uint8                                         Pad_205C[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettings        CommonSettings;                                    // 0x0030(0x0060)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;                                   // 0x0090(0x0008)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0098(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings;                                  // 0x00C0(0x0034)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                         Pad_205D[0x4];                                     // 0x00F4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkXboxOneInitializationSettings">();
	}
	static class UAkXboxOneInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkXboxOneInitializationSettings>();
	}
};
static_assert(alignof(UAkXboxOneInitializationSettings) == 0x000008, "Wrong alignment on UAkXboxOneInitializationSettings");
static_assert(sizeof(UAkXboxOneInitializationSettings) == 0x0000F8, "Wrong size on UAkXboxOneInitializationSettings");
static_assert(offsetof(UAkXboxOneInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkXboxOneInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkXboxOneInitializationSettings, ApuHeapSettings) == 0x000090, "Member 'UAkXboxOneInitializationSettings::ApuHeapSettings' has a wrong offset!");
static_assert(offsetof(UAkXboxOneInitializationSettings, CommunicationSettings) == 0x000098, "Member 'UAkXboxOneInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkXboxOneInitializationSettings, AdvancedSettings) == 0x0000C0, "Member 'UAkXboxOneInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkXboxOnePlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkXboxOnePlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkXboxOnePlatformInfo">();
	}
	static class UAkXboxOnePlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkXboxOnePlatformInfo>();
	}
};
static_assert(alignof(UAkXboxOnePlatformInfo) == 0x000008, "Wrong alignment on UAkXboxOnePlatformInfo");
static_assert(sizeof(UAkXboxOnePlatformInfo) == 0x000070, "Wrong size on UAkXboxOnePlatformInfo");

// Class AkAudio.AkXSXInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkXSXInitializationSettings : public UObject
{
public:
	uint8                                         Pad_205E[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAkCommonInitializationSettings        CommonSettings;                                    // 0x0030(0x0060)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXApuHeapInitializationSettings    ApuHeapSettings;                                   // 0x0090(0x0008)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x0098(0x0028)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXSXAdvancedInitializationSettings   AdvancedSettings;                                  // 0x00C0(0x0038)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

public:
	void MigrateMultiCoreRendering(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkXSXInitializationSettings">();
	}
	static class UAkXSXInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkXSXInitializationSettings>();
	}
};
static_assert(alignof(UAkXSXInitializationSettings) == 0x000008, "Wrong alignment on UAkXSXInitializationSettings");
static_assert(sizeof(UAkXSXInitializationSettings) == 0x0000F8, "Wrong size on UAkXSXInitializationSettings");
static_assert(offsetof(UAkXSXInitializationSettings, CommonSettings) == 0x000030, "Member 'UAkXSXInitializationSettings::CommonSettings' has a wrong offset!");
static_assert(offsetof(UAkXSXInitializationSettings, ApuHeapSettings) == 0x000090, "Member 'UAkXSXInitializationSettings::ApuHeapSettings' has a wrong offset!");
static_assert(offsetof(UAkXSXInitializationSettings, CommunicationSettings) == 0x000098, "Member 'UAkXSXInitializationSettings::CommunicationSettings' has a wrong offset!");
static_assert(offsetof(UAkXSXInitializationSettings, AdvancedSettings) == 0x0000C0, "Member 'UAkXSXInitializationSettings::AdvancedSettings' has a wrong offset!");

// Class AkAudio.AkMPXInitializationSettings
// 0x0000 (0x00F8 - 0x00F8)
class UAkMPXInitializationSettings final : public UAkXSXInitializationSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkMPXInitializationSettings">();
	}
	static class UAkMPXInitializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkMPXInitializationSettings>();
	}
};
static_assert(alignof(UAkMPXInitializationSettings) == 0x000008, "Wrong alignment on UAkMPXInitializationSettings");
static_assert(sizeof(UAkMPXInitializationSettings) == 0x0000F8, "Wrong size on UAkMPXInitializationSettings");

// Class AkAudio.AkXSXPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkXSXPlatformInfo final : public UAkPlatformInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AkXSXPlatformInfo">();
	}
	static class UAkXSXPlatformInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAkXSXPlatformInfo>();
	}
};
static_assert(alignof(UAkXSXPlatformInfo) == 0x000008, "Wrong alignment on UAkXSXPlatformInfo");
static_assert(sizeof(UAkXSXPlatformInfo) == 0x000070, "Wrong size on UAkXSXPlatformInfo");

// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (0x01D0 - 0x00E8)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	uint8                                         Pad_205F[0x40];                                    // 0x00E8(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Event;                                             // 0x0128(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          RetriggerEvent;                                    // 0x0130(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2060[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ScrubTailLengthMs;                                 // 0x0134(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          StopAtSectionEnd;                                  // 0x0138(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2061[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EventName;                                         // 0x0140(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2062[0x20];                                    // 0x0150(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSourceDuration;                                 // 0x0170(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2063[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MaxDurationSourceID;                               // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_2064[0x48];                                    // 0x0188(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAkAudioEventSection">();
	}
	static class UMovieSceneAkAudioEventSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAkAudioEventSection>();
	}
};
static_assert(alignof(UMovieSceneAkAudioEventSection) == 0x000008, "Wrong alignment on UMovieSceneAkAudioEventSection");
static_assert(sizeof(UMovieSceneAkAudioEventSection) == 0x0001D0, "Wrong size on UMovieSceneAkAudioEventSection");
static_assert(offsetof(UMovieSceneAkAudioEventSection, Event) == 0x000128, "Member 'UMovieSceneAkAudioEventSection::Event' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioEventSection, RetriggerEvent) == 0x000130, "Member 'UMovieSceneAkAudioEventSection::RetriggerEvent' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioEventSection, ScrubTailLengthMs) == 0x000134, "Member 'UMovieSceneAkAudioEventSection::ScrubTailLengthMs' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioEventSection, StopAtSectionEnd) == 0x000138, "Member 'UMovieSceneAkAudioEventSection::StopAtSectionEnd' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioEventSection, EventName) == 0x000140, "Member 'UMovieSceneAkAudioEventSection::EventName' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioEventSection, MaxSourceDuration) == 0x000170, "Member 'UMovieSceneAkAudioEventSection::MaxSourceDuration' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioEventSection, MaxDurationSourceID) == 0x000178, "Member 'UMovieSceneAkAudioEventSection::MaxDurationSourceID' has a wrong offset!");

// Class AkAudio.MovieSceneAkTrack
// 0x0018 (0x00A8 - 0x0090)
class UMovieSceneAkTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;                                          // 0x0090(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                         bIsAMasterTrack : 1;                               // 0x00A0(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_2065[0x7];                                     // 0x00A1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAkTrack">();
	}
	static class UMovieSceneAkTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAkTrack>();
	}
};
static_assert(alignof(UMovieSceneAkTrack) == 0x000008, "Wrong alignment on UMovieSceneAkTrack");
static_assert(sizeof(UMovieSceneAkTrack) == 0x0000A8, "Wrong size on UMovieSceneAkTrack");
static_assert(offsetof(UMovieSceneAkTrack, Sections) == 0x000090, "Member 'UMovieSceneAkTrack::Sections' has a wrong offset!");

// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0008 (0x00B0 - 0x00A8)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:
	uint8                                         Pad_2066[0x8];                                     // 0x00A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAkAudioEventTrack">();
	}
	static class UMovieSceneAkAudioEventTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAkAudioEventTrack>();
	}
};
static_assert(alignof(UMovieSceneAkAudioEventTrack) == 0x000008, "Wrong alignment on UMovieSceneAkAudioEventTrack");
static_assert(sizeof(UMovieSceneAkAudioEventTrack) == 0x0000B0, "Wrong size on UMovieSceneAkAudioEventTrack");

// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0168 (0x0250 - 0x00E8)
class UMovieSceneAkAudioRTPCSection final : public UMovieSceneSection
{
public:
	class UAkRtpc*                                RTPC;                                              // 0x00E8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 Name_MovieSceneAkAudioRTPCSection;                 // 0x00F0(0x0010)(Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRichCurve                             FloatCurve;                                        // 0x0100(0x0080)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;                   // 0x0180(0x0030)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel                RTPCChannel;                                       // 0x01B0(0x00A0)(Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAkAudioRTPCSection">();
	}
	static class UMovieSceneAkAudioRTPCSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAkAudioRTPCSection>();
	}
};
static_assert(alignof(UMovieSceneAkAudioRTPCSection) == 0x000008, "Wrong alignment on UMovieSceneAkAudioRTPCSection");
static_assert(sizeof(UMovieSceneAkAudioRTPCSection) == 0x000250, "Wrong size on UMovieSceneAkAudioRTPCSection");
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPC) == 0x0000E8, "Member 'UMovieSceneAkAudioRTPCSection::RTPC' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, Name_MovieSceneAkAudioRTPCSection) == 0x0000F0, "Member 'UMovieSceneAkAudioRTPCSection::Name_MovieSceneAkAudioRTPCSection' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatCurve) == 0x000100, "Member 'UMovieSceneAkAudioRTPCSection::FloatCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper) == 0x000180, "Member 'UMovieSceneAkAudioRTPCSection::FloatChannelSerializationHelper' has a wrong offset!");
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPCChannel) == 0x0001B0, "Member 'UMovieSceneAkAudioRTPCSection::RTPCChannel' has a wrong offset!");

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0008 (0x00B0 - 0x00A8)
class UMovieSceneAkAudioRTPCTrack final : public UMovieSceneAkTrack
{
public:
	uint8                                         Pad_2067[0x8];                                     // 0x00A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAkAudioRTPCTrack">();
	}
	static class UMovieSceneAkAudioRTPCTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAkAudioRTPCTrack>();
	}
};
static_assert(alignof(UMovieSceneAkAudioRTPCTrack) == 0x000008, "Wrong alignment on UMovieSceneAkAudioRTPCTrack");
static_assert(sizeof(UMovieSceneAkAudioRTPCTrack) == 0x0000B0, "Wrong size on UMovieSceneAkAudioRTPCTrack");

// Class AkAudio.PostEventAsync
// 0x0070 (0x00A0 - 0x0030)
class UPostEventAsync final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_2068[0x60];                                    // 0x0040(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UPostEventAsync* PostEventAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, const TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)>& PostEventCallback, const TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);

	void PollPostEventFuture();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PostEventAsync">();
	}
	static class UPostEventAsync* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostEventAsync>();
	}
};
static_assert(alignof(UPostEventAsync) == 0x000008, "Wrong alignment on UPostEventAsync");
static_assert(sizeof(UPostEventAsync) == 0x0000A0, "Wrong size on UPostEventAsync");
static_assert(offsetof(UPostEventAsync, Completed) == 0x000030, "Member 'UPostEventAsync::Completed' has a wrong offset!");

// Class AkAudio.PostEventAtLocationAsync
// 0x0050 (0x0080 - 0x0030)
class UPostEventAtLocationAsync final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_206B[0x40];                                    // 0x0040(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UPostEventAtLocationAsync* PostEventAtLocationAsync(const class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation);

	void PollPostEventFuture();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PostEventAtLocationAsync">();
	}
	static class UPostEventAtLocationAsync* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostEventAtLocationAsync>();
	}
};
static_assert(alignof(UPostEventAtLocationAsync) == 0x000008, "Wrong alignment on UPostEventAtLocationAsync");
static_assert(sizeof(UPostEventAtLocationAsync) == 0x000080, "Wrong size on UPostEventAtLocationAsync");
static_assert(offsetof(UPostEventAtLocationAsync, Completed) == 0x000030, "Member 'UPostEventAtLocationAsync::Completed' has a wrong offset!");

}

