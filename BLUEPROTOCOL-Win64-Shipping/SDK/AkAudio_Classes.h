#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AkAudio.AkPortalComponent
	 * Size -> 0x00C8 (FullSize[0x02D0] - InheritedSize[0x0208])
	 */
	class UAkPortalComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_GH5G[0x4];                                   // 0x0208(0x0004) Fix Super Size
		float                                                      ObstructionRefreshInterval;                              // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          ObstructionCollisionChannel;                             // 0x0210(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8UX[0xBF];                                  // 0x0211(0x00BF) MISSED OFFSET (PADDING)

	public:
		bool PortalPlacementValid();
		void OpenPortal();
		class UPrimitiveComponent* GetPrimitiveParent();
		EAkAcousticPortalState GetCurrentState();
		void ClosePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticPortal
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class AAkAcousticPortal : public AVolume
	{
	public:
		class UAkPortalComponent*                                  Portal;                                                  // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkAcousticPortalState                                     InitialState;                                            // 0x0268(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRequiresStateMigration;                                 // 0x0269(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_490Q[0x6];                                   // 0x026A(0x0006) MISSED OFFSET (PADDING)

	public:
		void OpenPortal();
		EAkAcousticPortalState GetCurrentState();
		void ClosePortal();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioType
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAkAudioType : public UObject
	{
	public:
		uint32_t                                                   shortId;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HXP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticTexture
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkAcousticTexture : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAcousticTextureSetComponent
	 * Size -> 0x0018 (FullSize[0x0220] - InheritedSize[0x0208])
	 */
	class UAkAcousticTextureSetComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_GCW3[0x8];                                   // 0x0208(0x0008) Fix Super Size
		unsigned char                                              UnknownData_V47N[0x10];                                  // 0x0210(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAmbientSound
	 * Size -> 0x0048 (FullSize[0x0270] - InheritedSize[0x0228])
	 */
	class AAkAmbientSound : public AActor
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0228(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkComponent*                                        AkComponent;                                             // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StopWhenOwnerIsDestroyed;                                // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x0239(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_403A[0x2E];                                  // 0x023A(0x002E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StopAmbientSound();
		void StartAmbientSound();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAndroidInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkAndroidInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_MGXY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAndroidAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPlatformInfo
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UAkPlatformInfo : public UObject
	{
	public:
		unsigned char                                              UnknownData_LA25[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAndroidPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkAndroidPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetBase
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAkAssetBase : public UAkAudioType
	{
	public:
		class UAkAssetPlatformData*                                PlatformAssetData;                                       // 0x0040(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H0BB[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkAssetData : public UObject
	{
	public:
		uint32_t                                                   CachedHash;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_52KH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BankLanguage;                                            // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KSS[0x38];                                  // 0x0040(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataWithMedia
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UAkAssetDataWithMedia : public UAkAssetData
	{
	public:
		TArray<class UAkMediaAsset*>                               MediaList;                                               // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetPlatformData
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAkAssetPlatformData : public UObject
	{
	public:
		class UAkAssetData*                                        CurrentAssetData;                                        // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainerData
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkAssetDataSwitchContainerData : public UObject
	{
	public:
		unsigned char                                              GroupValue[0x28];                                        // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UAkGroupValue*                                       DefaultGroupValue;                                       // 0x0050(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UAkMediaAsset*>                               MediaList;                                               // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class UAkAssetDataSwitchContainerData*>             Children;                                                // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAssetDataSwitchContainer
	 * Size -> 0x0068 (FullSize[0x00F0] - InheritedSize[0x0088])
	 */
	class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
	{
	public:
		TArray<class UAkAssetDataSwitchContainerData*>             SwitchContainers;                                        // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class UAkGroupValue*                                       DefaultGroupValue;                                       // 0x0098(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39Q0[0x50];                                  // 0x00A0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEventData
	 * Size -> 0x01A0 (FullSize[0x0290] - InheritedSize[0x00F0])
	 */
	class UAkAudioEventData : public UAkAssetDataSwitchContainer
	{
	public:
		float                                                      MaxAttenuationRadius;                                    // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInfinite;                                              // 0x00F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYU2[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDuration;                                         // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UAkAssetDataSwitchContainer*>    LocalizedMedia;                                          // 0x0100(0x0050) Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              PostedEvents[0x50];                                      // 0x0150(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UserDefinedSends[0x50];                                  // 0x01A0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              PostedTriggers[0x50];                                    // 0x01F0(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              GroupValues[0x50];                                       // 0x0240(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioBank
	 * Size -> 0x00C8 (FullSize[0x0118] - InheritedSize[0x0050])
	 */
	class UAkAudioBank : public UAkAssetBase
	{
	public:
		bool                                                       AutoLoad;                                                // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83KM[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UAkAssetPlatformData*>           LocalizedPlatformAssetDataMap;                           // 0x0058(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              LinkedAkEvents[0x50];                                    // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformAssetData;                       // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G37P[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioEvent
	 * Size -> 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
	 */
	class UAkAudioEvent : public UAkAssetBase
	{
	public:
		TMap<class FString, class UAkAssetPlatformData*>           LocalizedPlatformAssetDataMap;                           // 0x0050(0x0050) Edit, EditConst, NativeAccessSpecifierPublic
		class UAkAudioBank*                                        RequiredBank;                                            // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8B7[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAssetPlatformData*                                CurrentLocalizedPlatformData;                            // 0x00B0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAttenuationRadius;                                    // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       IsInfinite;                                              // 0x00BC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P2EE[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDuration;                                         // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaximumDuration;                                         // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1KZO[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetMinimumDuration();
		float GetMaximumDuration();
		float GetMaxAttenuationRadius();
		bool GetIsInfinite();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameObject
	 * Size -> 0x0028 (FullSize[0x0230] - InheritedSize[0x0208])
	 */
	class UAkGameObject : public USceneComponent
	{
	public:
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0210(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8TV[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, const class FString& RTPC);
		void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int32_t* PlayingID);
		int32_t PostAssociatedAkEvent(int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
		void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t* PlayingID, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& in_EventName);
		void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, const class FString& RTPC, int32_t PlayingID);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkComponent
	 * Size -> 0x01C0 (FullSize[0x03F0] - InheritedSize[0x0230])
	 */
	class UAkComponent : public UAkGameObject
	{
	public:
		ECollisionChannel                                          OcclusionCollisionChannel;                               // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0Y8[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableSpotReflectors : 1;                                // 0x0234(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTSF[0x3];                                   // 0x0235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OuterRadius;                                             // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerRadius;                                             // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              EarlyReflectionAuxBusName;                               // 0x0248(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    EarlyReflectionOrder;                                    // 0x0258(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionBusSendGain;                              // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      EarlyReflectionMaxPathLength;                            // 0x0260(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      roomReverbAuxBusGain;                                    // 0x0264(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxEdges;                                     // 0x0268(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    diffractionMaxPaths;                                     // 0x026C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      diffractionMaxPathLength;                                // 0x0270(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       DrawFirstOrderReflections : 1;                           // 0x0274(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawSecondOrderReflections : 1;                          // 0x0274(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawHigherOrderReflections : 1;                          // 0x0274(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrawDiffraction : 1;                                     // 0x0274(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X1RD[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       StopWhenOwnerDestroyed;                                  // 0x0278(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanReuse;                                                // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CW45[0x2];                                   // 0x027A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttenuationScalingFactor;                                // 0x027C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OcclusionRefreshInterval;                                // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseReverbVolumes;                                       // 0x0284(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSKQ[0x16B];                                 // 0x0285(0x016B) MISSED OFFSET (PADDING)

	public:
		void UseReverbVolumes(bool inUseReverbVolumes);
		void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState);
		void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
		void SetOutputBusVolume(float BusVolume);
		void SetListeners(TArray<class UAkComponent*> Listeners);
		void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);
		void SetEarlyReflectionsVolume(float SendVolume);
		void SetEarlyReflectionsAuxBus(const class FString& AuxBusName);
		void SetAttenuationScalingFactor(float Value);
		void PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger);
		void PostAssociatedAkEventAndWaitForEndAsync(int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventByName(const class FString& in_EventName);
		void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		float GetAttenuationRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAudioInputComponent
	 * Size -> 0x0030 (FullSize[0x0420] - InheritedSize[0x03F0])
	 */
	class UAkAudioInputComponent : public UAkComponent
	{
	public:
		unsigned char                                              UnknownData_H6CU[0x30];                                  // 0x03F0(0x0030) MISSED OFFSET (PADDING)

	public:
		int32_t PostAssociatedAudioInputEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkAuxBus
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UAkAuxBus : public UAkAssetBase
	{
	public:
		class UAkAudioBank*                                        RequiredBank;                                            // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCheckBox
	 * Size -> 0x0A20 (FullSize[0x0B58] - InheritedSize[0x0138])
	 */
	class UAkCheckBox : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_D5BF[0x3B0];                                 // 0x0138(0x03B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECheckBoxState                                             CheckedState;                                            // 0x04E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0W1[0x3];                                   // 0x04E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x04EC(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZD2[0x4];                                   // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x0500(0x0580) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0A80(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0A81(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7OX[0x6];                                   // 0x0A82(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkBoolPropertyToControl                            ThePropertyToControl;                                    // 0x0A88(0x0010) Edit, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x0A98(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             AkOnCheckStateChanged;                                   // 0x0AD8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0AE8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0AF8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44BP[0x50];                                  // 0x0B08(0x0050) MISSED OFFSET (PADDING)

	public:
		void SetIsChecked(bool InIsChecked);
		void SetCheckedState(ECheckBoxState InCheckedState);
		void SetAkItemId(const struct FGuid& ItemId);
		void SetAkBoolProperty(const class FString& ItemProperty);
		bool IsPressed();
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		class FString GetAkProperty();
		struct FGuid GetAkItemId();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.DrawPortalComponent
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class UDrawPortalComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_A9A9[0x8];                                   // 0x0468(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.DrawRoomComponent
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class UDrawRoomComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_OXCR[0x8];                                   // 0x0468(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkFolder
	 * Size -> 0x0078 (FullSize[0x00B8] - InheritedSize[0x0040])
	 */
	class UAkFolder : public UAkAudioType
	{
	public:
		class FString                                              UnrealFolderPath;                                        // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WwiseFolderPath;                                         // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M500[0x58];                                  // 0x0060(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGameplayStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkGameplayStatics : public UBlueprintFunctionLibrary
	{
	public:
		void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
		void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName);
		void UnloadBankByName(const class FString& BankName);
		void UnloadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankUnloadedCallback);
		void UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void StopProfilerCapture();
		void StopOutputCapture();
		void StopAllAmbientSounds(class UObject* WorldContextObject);
		void StopAll();
		void StopActor(class AActor* Actor);
		void StartProfilerCapture(const class FString& Filename);
		void StartOutputCapture(const class FString& Filename);
		void StartAllAmbientSounds(class UObject* WorldContextObject);
		class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy);
		void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const class FName& SwitchGroup, const class FName& SwitchState);
		void SetState(class UAkStateValue* StateValue, const class FName& StateGroup, const class FName& State);
		void SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const class FString& DeviceShareset);
		void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC);
		void SetReflectionsOrder(int32_t Order, bool RefreshPaths);
		void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue);
		void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
		void SetPanningRule(EPanningRule PanRule);
		void SetOutputBusVolume(float BusVolume, class AActor* Actor);
		void SetOcclusionScalingFactor(float ScalingFactor);
		void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
		void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
		void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue);
		void SetCurrentAudioCultureAsync(const class FString& AudioCulture, const class FScriptDelegate& Completed);
		void SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		void SetBusConfig(const class FString& BusName, EAkChannelConfiguration ChannelConfiguration);
		void ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC);
		void ReplaceMainOutput(const struct FAkOutputSettings& MainOutputSettings);
		void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const class FName& Trigger);
		void PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
		int32_t PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const class FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		void PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
		int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject);
		int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName);
		void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
		int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo);
		void LoadInitBank();
		void LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
		void LoadBankByName(const class FString& BankName);
		void LoadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankLoadedCallback);
		void LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
		bool IsGame(class UObject* WorldContextObject);
		bool IsEditor();
		void GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset);
		void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, class AActor* Actor, const class FName& RTPC);
		float GetOcclusionScalingFactor();
		class FString GetCurrentAudioCulture();
		TArray<class FString> GetAvailableAudioCultures();
		class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);
		class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType);
		class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);
		void ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve);
		void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID);
		void ClearBanks();
		void CancelEventCallback(const class FScriptDelegate& PostEventCallback);
		void AddOutputCaptureMarker(const class FString& MarkerText);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAkCallbackInfo : public UObject
	{
	public:
		class UAkComponent*                                        AkComponent;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkEventCallbackInfo
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAkEventCallbackInfo : public UAkCallbackInfo
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventId;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMIDIEventCallbackInfo
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		unsigned char                                              UnknownData_BHDE[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		EAkMidiEventType GetType();
		bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
		bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
		bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
		bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
		bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
		bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
		bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
		unsigned char GetChannel();
		bool GetCc(struct FAkMidiCc* AsCc);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMarkerCallbackInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		int32_t                                                    Identifier;                                              // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Position;                                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Label;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkDurationCallbackInfo
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAkDurationCallbackInfo : public UAkEventCallbackInfo
	{
	public:
		float                                                      Duration;                                                // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EstimatedDuration;                                       // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AudioNodeID;                                             // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MediaID;                                                 // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStreaming;                                              // 0x0048(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFLA[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMusicSyncCallbackInfo
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
	{
	public:
		int32_t                                                    PlayingID;                                               // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkSegmentInfo                                      SegmentInfo;                                             // 0x0034(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EAkCallbackType                                            MusicSyncType;                                           // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D67J[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UserCueName;                                             // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGeometryComponent
	 * Size -> 0x0190 (FullSize[0x03B0] - InheritedSize[0x0220])
	 */
	class UAkGeometryComponent : public UAkAcousticTextureSetComponent
	{
	public:
		EAkMeshType                                                MeshType;                                                // 0x0220(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ET11[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LOD;                                                     // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeldingThreshold;                                        // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9FE[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                               // 0x0230(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FAkGeometrySurfaceOverride                          CollisionMeshSurfaceOverride;                            // 0x0280(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffraction : 1;                                  // 0x0298(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffractionOnBoundaryEdges : 1;                   // 0x0298(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C11V[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZ5S[0x10];                                  // 0x02A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkGeometryData                                     GeometryData;                                            // 0x02B8(0x0050) NativeAccessSpecifierPrivate
		TMap<int32_t, double>                                      SurfaceAreas;                                            // 0x0308(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I6IE[0x58];                                  // 0x0358(0x0058) MISSED OFFSET (PADDING)

	public:
		void UpdateGeometry();
		void SendGeometry();
		void RemoveGeometry();
		void ConvertMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkGroupValue
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAkGroupValue : public UAkAudioType
	{
	public:
		unsigned char                                              MediaDependencies[0x10];                                 // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty
		uint32_t                                                   GroupShortID;                                            // 0x0050(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HG5F[0x14];                                  // 0x0054(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkHololensInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkHololensInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_2ZEW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkHololensAdvancedInitializationSettings           AdvancedSettings;                                        // 0x00C0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVNM[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkHololensPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkHololensPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBankAssetData
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UAkInitBankAssetData : public UAkAssetDataWithMedia
	{
	public:
		TArray<struct FAkPluginInfo>                               PluginInfos;                                             // 0x0088(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkInitBank
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UAkInitBank : public UAkAssetBase
	{
	public:
		TArray<class FString>                                      AvailableAudioCultures;                                  // 0x0050(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		class FString                                              DefaultLanguage;                                         // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkIOSInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkIOSInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_NN1U[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0098(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSAA[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A8(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00D0(0x002C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT8X[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkIOSPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkIOSPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemBoolPropertiesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		class FString Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemBoolProperties
	 * Size -> 0x0040 (FullSize[0x0160] - InheritedSize[0x0120])
	 */
	class UAkItemBoolProperties : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDragged;                                       // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNU3[0x20];                                  // 0x0140(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemPropertiesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
		class FString Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkItemProperties
	 * Size -> 0x0040 (FullSize[0x0160] - InheritedSize[0x0120])
	 */
	class UAkItemProperties : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDragged;                                       // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N9Y[0x20];                                  // 0x0140(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		class FString GetSelectedProperty();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLateReverbComponent
	 * Size -> 0x0088 (FullSize[0x0290] - InheritedSize[0x0208])
	 */
	class UAkLateReverbComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_9T1P[0x4];                                   // 0x0208(0x0004) Fix Super Size
		float                                                      SendLevel;                                               // 0x020C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x0210(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0214(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoAssignAuxBus;                                        // 0x0218(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WG8M[0x7];                                   // 0x0219(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3SQ[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBusManual;                                            // 0x0240(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O3OS[0x48];                                  // 0x0248(0x0048) MISSED OFFSET (PADDING)

	public:
		void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxAArch64PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkLinuxAArch64PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkLinuxInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_B0LQ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLinuxPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkLinuxPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMacInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkMacInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_6WP9[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMacPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkMacPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAssetData
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAkMediaAssetData : public UObject
	{
	public:
		bool                                                       IsStreamed;                                              // 0x0028(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseDeviceMemory;                                         // 0x0029(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1MD[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Language;                                                // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HW35[0x28];                                  // 0x0040(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMediaAsset
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAkMediaAsset : public UObject
	{
	public:
		uint32_t                                                   ID;                                                      // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE0M[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MediaName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoLoad;                                                // 0x0040(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJAV[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     UserData;                                                // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x0058(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkMediaAssetData*                                   CurrentMediaAssetData;                                   // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VOG2[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkLocalizedMediaAsset
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UAkLocalizedMediaAsset : public UAkMediaAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkExternalMediaAsset
	 * Size -> 0x0060 (FullSize[0x00D8] - InheritedSize[0x0078])
	 */
	class UAkExternalMediaAsset : public UAkMediaAsset
	{
	public:
		unsigned char                                              UnknownData_8MOC[0x60];                                  // 0x0078(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPlatformInitialisationSettingsBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkPlatformInitialisationSettingsBase : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS4InitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkPS4InitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_7CWJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkPS4AdvancedInitializationSettings                AdvancedSettings;                                        // 0x00B8(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS4PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkPS4PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS5InitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkPS5InitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_G55V[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0090(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkPS5AdvancedInitializationSettings                AdvancedSettings;                                        // 0x00B8(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HI8A[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkDPXInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkPS5PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkPS5PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkReverbVolume
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class AAkReverbVolume : public AVolume
	{
	public:
		bool                                                       bEnabled : 1;                                            // 0x0260(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O89Y[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAuxBus*                                           AuxBus;                                                  // 0x0268(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuxBusName;                                              // 0x0270(0x0010) ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SendLevel;                                               // 0x0280(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeRate;                                                // 0x0284(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0288(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NTQ[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkLateReverbComponent*                              LateReverbComponent;                                     // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRoomComponent
	 * Size -> 0x0030 (FullSize[0x0260] - InheritedSize[0x0230])
	 */
	class UAkRoomComponent : public UAkGameObject
	{
	public:
		float                                                      Priority;                                                // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WallOcclusion;                                           // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AuxSendLevel;                                            // 0x0238(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoPost;                                                // 0x023C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYIW[0xB];                                   // 0x023D(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAcousticTextureSetComponent*                      GeometryComponent;                                       // 0x0248(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6TFG[0x10];                                  // 0x0250(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
		class UPrimitiveComponent* GetPrimitiveParent();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkRtpc
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkRtpc : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettings
	 * Size -> 0x02B8 (FullSize[0x02E0] - InheritedSize[0x0028])
	 */
	class UAkSettings : public UObject
	{
	public:
		unsigned char                                              MaxSimultaneousReverbVolumes;                            // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CI6[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFilePath                                           WwiseProjectPath;                                        // 0x0030(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FDirectoryPath                                      WwiseSoundDataFolder;                                    // 0x0040(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0050(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultOcclusionCollisionChannel;                        // 0x0051(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          DefaultFitToGeometryCollisionChannel;                    // 0x0052(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OCE5[0x5];                                   // 0x0053(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AkGeometryMap[0x50];                                     // 0x0058(0x0050) UNKNOWN PROPERTY: MapProperty
		float                                                      GlobalDecayAbsorption;                                   // 0x00A8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESYZ[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultReverbAuxBus[0x28];                               // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EnvironmentDecayAuxBusMap[0x50];                         // 0x00D8(0x0050) UNKNOWN PROPERTY: MapProperty
		class FString                                              HFDampingName;                                           // 0x0128(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DecayEstimateName;                                       // 0x0138(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TimeToFirstReflectionName;                               // 0x0148(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HFDampingRTPC[0x28];                                     // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DecayEstimateRTPC[0x28];                                 // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              TimeToFirstReflectionRTPC[0x28];                         // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              AudioInputEvent[0x28];                                   // 0x01D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<struct FGuid, struct FAkAcousticTextureParams>        AcousticTextureParamsMap;                                // 0x01F8(0x0050) Config, NativeAccessSpecifierPublic
		bool                                                       SplitSwitchContainerMedia;                               // 0x0248(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SplitMediaPerFolder;                                     // 0x0249(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseEventBasedPackaging;                                  // 0x024A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x024B(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJJQ[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CommandletCommitMessage;                                 // 0x0250(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         UnrealCultureToWwiseCulture;                             // 0x0260(0x0050) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       AskedToUseNewAssetManagement;                            // 0x02B0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMultiCoreRendering;                               // 0x02B1(0x0001) ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MigratedEnableMultiCoreRendering;                        // 0x02B2(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FixupRedirectorsDuringMigration;                         // 0x02B3(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0GY[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x02B8(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x02C8(0x0010) Config, Deprecated, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BIWM[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSettingsPerUser
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UAkSettingsPerUser : public UObject
	{
	public:
		struct FDirectoryPath                                      WwiseWindowsInstallationPath;                            // 0x0028(0x0010) Edit, Config, NativeAccessSpecifierPublic
		struct FFilePath                                           WwiseMacInstallationPath;                                // 0x0038(0x0010) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       EnableAutomaticAssetSynchronization;                     // 0x0048(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PS1V[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              WaapiIPAddress;                                          // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   WaapiPort;                                               // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoConnectToWAAPI;                                     // 0x0064(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoSyncSelection;                                       // 0x0065(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateSoundOnlyWindows;                                // 0x0066(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateSoundOnlyJapanese;                               // 0x0067(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SuppressWwiseProjectPathWarnings;                        // 0x0068(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SoundDataGenerationSkipLanguage;                         // 0x0069(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YWQS[0x1E];                                  // 0x006A(0x001E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSlider
	 * Size -> 0x0428 (FullSize[0x0548] - InheritedSize[0x0120])
	 */
	class UAkSlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0124(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AE3W[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0138(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0478(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JALL[0x3];                                   // 0x0479(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x047C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x048C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x049C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       locked;                                                  // 0x049D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVO7[0x2];                                   // 0x049E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x04A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x04A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z820[0x3];                                   // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkPropertyToControl                                ThePropertyToControl;                                    // 0x04A8(0x0010) Edit, EditConst, NativeAccessSpecifierPublic
		struct FAkWwiseItemToControl                               ItemToControl;                                           // 0x04B8(0x0040) Edit, Config, EditConst, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0508(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPropertyDropped;                                       // 0x0518(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZX4J[0x20];                                  // 0x0528(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		void SetAkSliderItemProperty(const class FString& ItemProperty);
		void SetAkSliderItemId(const struct FGuid& ItemId);
		float GetValue();
		class FString GetAkSliderItemProperty();
		struct FGuid GetAkSliderItemId();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSpatialAudioVolume
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class AAkSpatialAudioVolume : public AVolume
	{
	public:
		class UAkSurfaceReflectorSetComponent*                     SurfaceReflectorSet;                                     // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkLateReverbComponent*                              LateReverb;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkRoomComponent*                                    Room;                                                    // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSpotReflector
	 * Size -> 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
	 */
	class AAkSpotReflector : public AActor
	{
	public:
		class UAkAuxBus*                                           EarlyReflectionAuxBus;                                   // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EarlyReflectionAuxBusName;                               // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkAcousticTexture*                                  AcousticTexture;                                         // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceScalingFactor;                                   // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Level;                                                   // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkStateValue
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UAkStateValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSubmixInputComponent
	 * Size -> 0x0060 (FullSize[0x0480] - InheritedSize[0x0420])
	 */
	class UAkSubmixInputComponent : public UAkAudioInputComponent
	{
	public:
		unsigned char                                              UnknownData_05F9[0x8];                                   // 0x0420(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundSubmix*                                        SubmixToRecord;                                          // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVTY[0x50];                                  // 0x0430(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSurfaceReflectorSetComponent
	 * Size -> 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
	 */
	class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
	{
	public:
		bool                                                       bEnableSurfaceReflectors : 1;                            // 0x0220(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4H62[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkSurfacePoly>                              AcousticPolys;                                           // 0x0228(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffraction : 1;                                  // 0x0238(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDiffractionOnBoundaryEdges : 1;                   // 0x0238(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4Z9[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AssociatedRoom;                                          // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0R8H[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateSurfaceReflectorSet();
		void SendSurfaceReflectorSet();
		void RemoveSurfaceReflectorSet();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchInitializationSettings
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UAkSwitchInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZHCS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithCommSelection           CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                        // 0x00C0(0x0030) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkSwitchPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkSwitchValue
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UAkSwitchValue : public UAkGroupValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTrigger
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAkTrigger : public UAkAudioType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTVOSInitializationSettings
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UAkTVOSInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_FY4G[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAudioSession                                     AudioSession;                                            // 0x0098(0x000C) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9PQ[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x00A8(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkAdvancedInitializationSettings                   AdvancedSettings;                                        // 0x00D0(0x002C) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3MK[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkTVOSPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkTVOSPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiCalls
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiCalls : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
		struct FAKWaapiJsonObject SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const class FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
		void SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID);
		bool RegisterWaapiProjectLoadedCallback(const class FScriptDelegate& Callback);
		bool RegisterWaapiConnectionLostCallback(const class FScriptDelegate& Callback);
		int32_t GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
		class FText Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		class FString Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
		struct FAKWaapiJsonObject CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.SAkWaapiFieldNamesConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		class FString Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiJsonManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
	{
	public:
		struct FAKWaapiJsonObject SetStringField(const struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<class FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
		class FString GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		struct FAKWaapiJsonObject GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		float GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		int32_t GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		bool GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		TArray<struct FAKWaapiJsonObject> GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
		class FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		class FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWaapiUriConv
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAkWaapiUriConv : public UBlueprintFunctionLibrary
	{
	public:
		class FText Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
		class FString Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkWindowsInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_LRPG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettingsWithSampleRate       CommonSettings;                                          // 0x0030(0x0068) Edit, Config, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkWindowsAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWin32PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWin32PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWin64PlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWin64PlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWindowsPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWwiseTree
	 * Size -> 0x0040 (FullSize[0x0160] - InheritedSize[0x0120])
	 */
	class UAkWwiseTree : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDragged;                                           // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJFH[0x20];                                  // 0x0140(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSearchText(const class FString& newText);
		struct FAkWwiseObjectDetails GetSelectedItem();
		class FString GetSearchText();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkWwiseTreeSelector
	 * Size -> 0x0060 (FullSize[0x0180] - InheritedSize[0x0120])
	 */
	class UAkWwiseTreeSelector : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDragged;                                           // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KTX[0x40];                                  // 0x0140(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOneInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkXboxOneInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZVCZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneApuHeapInitializationSettings             ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXboxOneAdvancedInitializationSettings            AdvancedSettings;                                        // 0x00C0(0x0034) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P93Y[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXboxOnePlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXboxOnePlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXSXInitializationSettings
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAkXSXInitializationSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_GCQW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkCommonInitializationSettings                     CommonSettings;                                          // 0x0030(0x0060) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXSXApuHeapInitializationSettings                 ApuHeapSettings;                                         // 0x0090(0x0008) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FAkCommunicationSettingsWithSystemInitialization    CommunicationSettings;                                   // 0x0098(0x0028) Edit, Config, NativeAccessSpecifierPublic
		struct FAkXSXAdvancedInitializationSettings                AdvancedSettings;                                        // 0x00C0(0x0038) Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		void MigrateMultiCoreRendering(bool NewValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkMPXInitializationSettings
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.AkXSXPlatformInfo
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAkXSXPlatformInfo : public UAkPlatformInfo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventSection
	 * Size -> 0x00E8 (FullSize[0x01D0] - InheritedSize[0x00E8])
	 */
	class UMovieSceneAkAudioEventSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_WM6M[0x40];                                  // 0x00E8(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       Event;                                                   // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       RetriggerEvent;                                          // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HT3H[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ScrubTailLengthMs;                                       // 0x0134(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       StopAtSectionEnd;                                        // 0x0138(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IM7T[0x7];                                   // 0x0139(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventName;                                               // 0x0140(0x0010) Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4A0N[0x20];                                  // 0x0150(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSourceDuration;                                       // 0x0170(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OGNK[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MaxDurationSourceID;                                     // 0x0178(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A68R[0x48];                                  // 0x0188(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkTrack
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UMovieSceneAkTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0090(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsAMasterTrack : 1;                                     // 0x00A0(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N6R9[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioEventTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
	{
	public:
		unsigned char                                              UnknownData_KF0G[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCSection
	 * Size -> 0x0168 (FullSize[0x0250] - InheritedSize[0x00E8])
	 */
	class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
	{
	public:
		class UAkRtpc*                                             RTPC;                                                    // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Name;                                                    // 0x00F0(0x0010) Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRichCurve                                          FloatCurve;                                              // 0x0100(0x0080) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannelSerializationHelper          FloatChannelSerializationHelper;                         // 0x0180(0x0030) Protected, NativeAccessSpecifierProtected
		struct FMovieSceneFloatChannel                             RTPCChannel;                                             // 0x01B0(0x00A0) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.MovieSceneAkAudioRTPCTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
	{
	public:
		unsigned char                                              UnknownData_FETO[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.PostEventAsync
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UPostEventAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HKE[0x60];                                  // 0x0040(0x0060) MISSED OFFSET (PADDING)

	public:
		class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed);
		void PollPostEventFuture();
		static UClass* StaticClass();
	};

	/**
	 * Class AkAudio.PostEventAtLocationAsync
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             Completed;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KNE[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)

	public:
		class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation);
		void PollPostEventFuture();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
