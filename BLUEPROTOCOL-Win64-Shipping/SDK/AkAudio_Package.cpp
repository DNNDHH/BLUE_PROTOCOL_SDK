﻿/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkPortalComponent.PortalPlacementValid
	 * 		Flags  -> ()
	 */
	bool UAkPortalComponent::PortalPlacementValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.PortalPlacementValid");
		
		UAkPortalComponent_PortalPlacementValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkPortalComponent.OpenPortal
	 * 		Flags  -> ()
	 */
	void UAkPortalComponent::OpenPortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.OpenPortal");
		
		UAkPortalComponent_OpenPortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkPortalComponent.GetPrimitiveParent
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.GetPrimitiveParent");
		
		UAkPortalComponent_GetPrimitiveParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkPortalComponent.GetCurrentState
	 * 		Flags  -> ()
	 */
	EAkAcousticPortalState UAkPortalComponent::GetCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.GetCurrentState");
		
		UAkPortalComponent_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkPortalComponent.ClosePortal
	 * 		Flags  -> ()
	 */
	void UAkPortalComponent::ClosePortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.ClosePortal");
		
		UAkPortalComponent_ClosePortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPortalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPortalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPortalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAcousticPortal.OpenPortal
	 * 		Flags  -> ()
	 */
	void AAkAcousticPortal::OpenPortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");
		
		AAkAcousticPortal_OpenPortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAcousticPortal.GetCurrentState
	 * 		Flags  -> ()
	 */
	EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");
		
		AAkAcousticPortal_GetCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAcousticPortal.ClosePortal
	 * 		Flags  -> ()
	 */
	void AAkAcousticPortal::ClosePortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");
		
		AAkAcousticPortal_ClosePortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkAcousticPortal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkAcousticPortal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAcousticTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAcousticTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAcousticTextureSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAcousticTextureSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAcousticTextureSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAmbientSound.StopAmbientSound
	 * 		Flags  -> ()
	 */
	void AAkAmbientSound::StopAmbientSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");
		
		AAkAmbientSound_StopAmbientSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAmbientSound.StartAmbientSound
	 * 		Flags  -> ()
	 */
	void AAkAmbientSound::StartAmbientSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");
		
		AAkAmbientSound_StartAmbientSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkAmbientSound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkAmbientSound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering");
		
		UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAndroidInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAndroidInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAndroidInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAndroidPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAndroidPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAndroidPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetDataWithMedia.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetDataWithMedia::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataWithMedia");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetPlatformData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetPlatformData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetPlatformData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetDataSwitchContainerData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetDataSwitchContainerData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainerData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAssetDataSwitchContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAssetDataSwitchContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioEventData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioEventData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioEventData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioBank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAudioEvent.GetMinimumDuration
	 * 		Flags  -> ()
	 */
	float UAkAudioEvent::GetMinimumDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMinimumDuration");
		
		UAkAudioEvent_GetMinimumDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAudioEvent.GetMaximumDuration
	 * 		Flags  -> ()
	 */
	float UAkAudioEvent::GetMaximumDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMaximumDuration");
		
		UAkAudioEvent_GetMaximumDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	 * 		Flags  -> ()
	 */
	float UAkAudioEvent::GetMaxAttenuationRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius");
		
		UAkAudioEvent_GetMaxAttenuationRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAudioEvent.GetIsInfinite
	 * 		Flags  -> ()
	 */
	bool UAkAudioEvent::GetIsInfinite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetIsInfinite");
		
		UAkAudioEvent_GetIsInfinite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameObject.Stop
	 * 		Flags  -> ()
	 */
	void UAkGameObject::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.Stop");
		
		UAkGameObject_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameObject.SetRTPCValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InterpolationTimeMs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RTPC                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameObject::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, const class FString& RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.SetRTPCValue");
		
		UAkGameObject_SetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.Value = Value;
		params.InterpolationTimeMs = InterpolationTimeMs;
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameObject::PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int32_t* PlayingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEventAsync");
		
		UAkGameObject_PostAssociatedAkEventAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameObject.PostAssociatedAkEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameObject::PostAssociatedAkEvent(int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEvent");
		
		UAkGameObject_PostAssociatedAkEvent_Params params {};
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameObject.PostAkEventAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UAkGameObject::PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t* PlayingID, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEventAsync");
		
		UAkGameObject_PostAkEventAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AkEvent = AkEvent;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameObject.PostAkEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      in_EventName                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameObject::PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& in_EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEvent");
		
		UAkGameObject_PostAkEvent_Params params {};
		params.AkEvent = AkEvent;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.in_EventName = in_EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameObject.GetRTPCValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERTPCValueType                                     InputValueType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERTPCValueType                                     OutputValueType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RTPC                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameObject::GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, const class FString& RTPC, int32_t PlayingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.GetRTPCValue");
		
		UAkGameObject_GetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.InputValueType = InputValueType;
		params.RTPC = RTPC;
		params.PlayingID = PlayingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (OutputValueType != nullptr)
			*OutputValueType = params.OutputValueType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkGameObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkGameObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGameObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.UseReverbVolumes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inUseReverbVolumes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");
		
		UAkComponent_UseReverbVolumes_Params params {};
		params.inUseReverbVolumes = inUseReverbVolumes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.UseEarlyReflections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAuxBus*                                   AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BusSendGain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPathLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SpotReflectors                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuxBusName                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");
		
		UAkComponent_UseEarlyReflections_Params params {};
		params.AuxBus = AuxBus;
		params.Order = Order;
		params.BusSendGain = BusSendGain;
		params.MaxPathLength = MaxPathLength;
		params.SpotReflectors = SpotReflectors;
		params.AuxBusName = AuxBusName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.SetSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkSwitchValue*                              SwitchValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SwitchGroup                                                (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SwitchState                                                (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");
		
		UAkComponent_SetSwitch_Params params {};
		params.SwitchValue = SwitchValue;
		params.SwitchGroup = SwitchGroup;
		params.SwitchState = SwitchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStopWhenOwnerDestroyed                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed");
		
		UAkComponent_SetStopWhenOwnerDestroyed_Params params {};
		params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.SetOutputBusVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BusVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetOutputBusVolume(float BusVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");
		
		UAkComponent_SetOutputBusVolume_Params params {};
		params.BusVolume = BusVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.SetListeners
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UAkComponent*>                        Listeners                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");
		
		UAkComponent_SetListeners_Params params {};
		params.Listeners = Listeners;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.SetGameObjectRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              in_outerRadius                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              in_innerRadius                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetGameObjectRadius(float in_outerRadius, float in_innerRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetGameObjectRadius");
		
		UAkComponent_SetGameObjectRadius_Params params {};
		params.in_outerRadius = in_outerRadius;
		params.in_innerRadius = in_innerRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.SetEarlyReflectionsVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SendVolume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetEarlyReflectionsVolume(float SendVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsVolume");
		
		UAkComponent_SetEarlyReflectionsVolume_Params params {};
		params.SendVolume = SendVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AuxBusName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetEarlyReflectionsAuxBus(const class FString& AuxBusName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus");
		
		UAkComponent_SetEarlyReflectionsAuxBus_Params params {};
		params.AuxBusName = AuxBusName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.SetAttenuationScalingFactor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::SetAttenuationScalingFactor(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");
		
		UAkComponent_SetAttenuationScalingFactor_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.PostTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkTrigger*                                  TriggerValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Trigger                                                    (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");
		
		UAkComponent_PostTrigger_Params params {};
		params.TriggerValue = TriggerValue;
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync");
		
		UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params params {};
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd");
		
		UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params params {};
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.PostAkEventByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      in_EventName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkComponent::PostAkEventByName(const class FString& in_EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventByName");
		
		UAkComponent_PostAkEventByName_Params params {};
		params.in_EventName = in_EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UAkComponent::PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync");
		
		UAkComponent_PostAkEventAndWaitForEndAsync_Params params {};
		params.AkEvent = AkEvent;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      in_EventName                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	int32_t UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd");
		
		UAkComponent_PostAkEventAndWaitForEnd_Params params {};
		params.AkEvent = AkEvent;
		params.in_EventName = in_EventName;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkComponent.GetAttenuationRadius
	 * 		Flags  -> ()
	 */
	float UAkComponent::GetAttenuationRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");
		
		UAkComponent_GetAttenuationRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	 * 		Flags  -> ()
	 */
	int32_t UAkAudioInputComponent::PostAssociatedAudioInputEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent");
		
		UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAudioInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAudioInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkAuxBus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkAuxBus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAuxBus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.SetIsChecked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsChecked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkCheckBox::SetIsChecked(bool InIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetIsChecked");
		
		UAkCheckBox_SetIsChecked_Params params {};
		params.InIsChecked = InIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.SetCheckedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkCheckBox::SetCheckedState(ECheckBoxState InCheckedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetCheckedState");
		
		UAkCheckBox_SetCheckedState_Params params {};
		params.InCheckedState = InCheckedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.SetAkItemId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkCheckBox::SetAkItemId(const struct FGuid& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkItemId");
		
		UAkCheckBox_SetAkItemId_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.SetAkBoolProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemProperty                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkCheckBox::SetAkBoolProperty(const class FString& ItemProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkBoolProperty");
		
		UAkCheckBox_SetAkBoolProperty_Params params {};
		params.ItemProperty = ItemProperty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.IsPressed
	 * 		Flags  -> ()
	 */
	bool UAkCheckBox::IsPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsPressed");
		
		UAkCheckBox_IsPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.IsChecked
	 * 		Flags  -> ()
	 */
	bool UAkCheckBox::IsChecked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsChecked");
		
		UAkCheckBox_IsChecked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.GetCheckedState
	 * 		Flags  -> ()
	 */
	ECheckBoxState UAkCheckBox::GetCheckedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetCheckedState");
		
		UAkCheckBox_GetCheckedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.GetAkProperty
	 * 		Flags  -> ()
	 */
	class FString UAkCheckBox::GetAkProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkProperty");
		
		UAkCheckBox_GetAkProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkCheckBox.GetAkItemId
	 * 		Flags  -> ()
	 */
	struct FGuid UAkCheckBox::GetAkItemId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkItemId");
		
		UAkCheckBox_GetAkItemId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkCheckBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkCheckBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkCheckBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawPortalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawPortalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.DrawPortalComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDrawRoomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawRoomComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.DrawRoomComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkFolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkFolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkFolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UseReverbVolumes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               inUseReverbVolumes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseReverbVolumes");
		
		UAkGameplayStatics_UseReverbVolumes_Params params {};
		params.inUseReverbVolumes = inUseReverbVolumes;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UseEarlyReflections
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAuxBus*                                   AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BusSendGain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPathLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               SpotReflectors                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AuxBusName                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseEarlyReflections");
		
		UAkGameplayStatics_UseEarlyReflections_Params params {};
		params.Actor = Actor;
		params.AuxBus = AuxBus;
		params.Order = Order;
		params.BusSendGain = BusSendGain;
		params.MaxPathLength = MaxPathLength;
		params.SpotReflectors = SpotReflectors;
		params.AuxBusName = AuxBusName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UnloadBankByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BankName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::UnloadBankByName(const class FString& BankName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankByName");
		
		UAkGameplayStatics_UnloadBankByName_Params params {};
		params.BankName = BankName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UnloadBankAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              BankUnloadedCallback                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::UnloadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankUnloadedCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankAsync");
		
		UAkGameplayStatics_UnloadBankAsync_Params params {};
		params.Bank = Bank;
		params.BankUnloadedCallback = BankUnloadedCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.UnloadBank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BankName                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBank");
		
		UAkGameplayStatics_UnloadBank_Params params {};
		params.Bank = Bank;
		params.BankName = BankName;
		params.LatentInfo = LatentInfo;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopProfilerCapture
	 * 		Flags  -> ()
	 */
	void UAkGameplayStatics::StopProfilerCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopProfilerCapture");
		
		UAkGameplayStatics_StopProfilerCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopOutputCapture
	 * 		Flags  -> ()
	 */
	void UAkGameplayStatics::StopOutputCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopOutputCapture");
		
		UAkGameplayStatics_StopOutputCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::StopAllAmbientSounds(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds");
		
		UAkGameplayStatics_StopAllAmbientSounds_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopAll
	 * 		Flags  -> ()
	 */
	void UAkGameplayStatics::StopAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAll");
		
		UAkGameplayStatics_StopAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StopActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::StopActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopActor");
		
		UAkGameplayStatics_StopActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StartProfilerCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::StartProfilerCapture(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartProfilerCapture");
		
		UAkGameplayStatics_StartProfilerCapture_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StartOutputCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::StartOutputCapture(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartOutputCapture");
		
		UAkGameplayStatics_StartOutputCapture_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::StartAllAmbientSounds(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds");
		
		UAkGameplayStatics_StartAllAmbientSounds_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               AutoPost                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AutoDestroy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation");
		
		UAkGameplayStatics_SpawnAkComponentAtLocation_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AkEvent = AkEvent;
		params.Location = Location;
		params.Orientation = Orientation;
		params.AutoPost = AutoPost;
		params.EventName = EventName;
		params.AutoDestroy = AutoDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkSwitchValue*                              SwitchValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SwitchGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SwitchState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const class FName& SwitchGroup, const class FName& SwitchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitch");
		
		UAkGameplayStatics_SetSwitch_Params params {};
		params.SwitchValue = SwitchValue;
		params.Actor = Actor;
		params.SwitchGroup = SwitchGroup;
		params.SwitchState = SwitchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkStateValue*                               StateValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StateGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetState(class UAkStateValue* StateValue, const class FName& StateGroup, const class FName& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetState");
		
		UAkGameplayStatics_SetState_Params params {};
		params.StateValue = StateValue;
		params.StateGroup = StateGroup;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetSpeakerAngles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      SpeakerAngles                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              HeightAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeviceShareset                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const class FString& DeviceShareset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSpeakerAngles");
		
		UAkGameplayStatics_SetSpeakerAngles_Params params {};
		params.SpeakerAngles = SpeakerAngles;
		params.HeightAngle = HeightAngle;
		params.DeviceShareset = DeviceShareset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetRTPCValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InterpolationTimeMs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRTPCValue");
		
		UAkGameplayStatics_SetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.Value = Value;
		params.InterpolationTimeMs = InterpolationTimeMs;
		params.Actor = Actor;
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetReflectionsOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RefreshPaths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetReflectionsOrder(int32_t Order, bool RefreshPaths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetReflectionsOrder");
		
		UAkGameplayStatics_SetReflectionsOrder_Params params {};
		params.Order = Order;
		params.RefreshPaths = RefreshPaths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkPortalComponent*                          PortalComponent0                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkPortalComponent*                          PortalComponent1                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ObstructionValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction");
		
		UAkGameplayStatics_SetPortalToPortalObstruction_Params params {};
		params.PortalComponent0 = PortalComponent0;
		params.PortalComponent1 = PortalComponent1;
		params.ObstructionValue = ObstructionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkPortalComponent*                          PortalComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ObstructionValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OcclusionValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion");
		
		UAkGameplayStatics_SetPortalObstructionAndOcclusion_Params params {};
		params.PortalComponent = PortalComponent;
		params.ObstructionValue = ObstructionValue;
		params.OcclusionValue = OcclusionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetPanningRule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPanningRule                                       PanRule                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetPanningRule(EPanningRule PanRule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPanningRule");
		
		UAkGameplayStatics_SetPanningRule_Params params {};
		params.PanRule = PanRule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetOutputBusVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BusVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputBusVolume");
		
		UAkGameplayStatics_SetOutputBusVolume_Params params {};
		params.BusVolume = BusVolume;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ScalingFactor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor");
		
		UAkGameplayStatics_SetOcclusionScalingFactor_Params params {};
		params.ScalingFactor = ScalingFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RefreshInterval                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval");
		
		UAkGameplayStatics_SetOcclusionRefreshInterval_Params params {};
		params.RefreshInterval = RefreshInterval;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetMultiplePositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EAkMultiPositionType                               MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultiplePositions");
		
		UAkGameplayStatics_SetMultiplePositions_Params params {};
		params.GameObjectAkComponent = GameObjectAkComponent;
		params.Positions = Positions;
		params.MultiPositionType = MultiPositionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkChannelMask>                      ChannelMasks                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EAkMultiPositionType                               MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions");
		
		UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params params {};
		params.GameObjectAkComponent = GameObjectAkComponent;
		params.ChannelMasks = ChannelMasks;
		params.Positions = Positions;
		params.MultiPositionType = MultiPositionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EAkChannelConfiguration>                    ChannelMasks                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EAkMultiPositionType                               MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions");
		
		UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params params {};
		params.GameObjectAkComponent = GameObjectAkComponent;
		params.ChannelMasks = ChannelMasks;
		params.Positions = Positions;
		params.MultiPositionType = MultiPositionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkPortalComponent*                          PortalComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ObstructionValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction");
		
		UAkGameplayStatics_SetGameObjectToPortalObstruction_Params params {};
		params.GameObjectAkComponent = GameObjectAkComponent;
		params.PortalComponent = PortalComponent;
		params.ObstructionValue = ObstructionValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AudioCulture                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetCurrentAudioCultureAsync(const class FString& AudioCulture, const class FScriptDelegate& Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync");
		
		UAkGameplayStatics_SetCurrentAudioCultureAsync_Params params {};
		params.AudioCulture = AudioCulture;
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AudioCulture                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture");
		
		UAkGameplayStatics_SetCurrentAudioCulture_Params params {};
		params.AudioCulture = AudioCulture;
		params.LatentInfo = LatentInfo;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.SetBusConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BusName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAkChannelConfiguration                            ChannelConfiguration                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::SetBusConfig(const class FString& BusName, EAkChannelConfiguration ChannelConfiguration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusConfig");
		
		UAkGameplayStatics_SetBusConfig_Params params {};
		params.BusName = BusName;
		params.ChannelConfiguration = ChannelConfiguration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ResetRTPCValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InterpolationTimeMs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, const class FName& RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ResetRTPCValue");
		
		UAkGameplayStatics_ResetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.InterpolationTimeMs = InterpolationTimeMs;
		params.Actor = Actor;
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ReplaceMainOutput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkOutputSettings                           MainOutputSettings                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::ReplaceMainOutput(const struct FAkOutputSettings& MainOutputSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ReplaceMainOutput");
		
		UAkGameplayStatics_ReplaceMainOutput_Params params {};
		params.MainOutputSettings = MainOutputSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkTrigger*                                  TriggerValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const class FName& Trigger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostTrigger");
		
		UAkGameplayStatics_PostTrigger_Params params {};
		params.TriggerValue = TriggerValue;
		params.Actor = Actor;
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventByName");
		
		UAkGameplayStatics_PostEventByName_Params params {};
		params.EventName = EventName;
		params.Actor = Actor;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const class FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAttached");
		
		UAkGameplayStatics_PostEventAttached_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.AttachPointName = AttachPointName;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName");
		
		UAkGameplayStatics_PostEventAtLocationByName_Params params {};
		params.EventName = EventName;
		params.Location = Location;
		params.Orientation = Orientation;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEventAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocation");
		
		UAkGameplayStatics_PostEventAtLocation_Params params {};
		params.AkEvent = AkEvent;
		params.Location = Location;
		params.Orientation = Orientation;
		params.EventName = EventName;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEvent");
		
		UAkGameplayStatics_PostEvent_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync");
		
		UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.ExternalSources = ExternalSources;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayingID != nullptr)
			*PlayingID = params.PlayingID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	int32_t UAkGameplayStatics::PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent");
		
		UAkGameplayStatics_PostAndWaitForEndOfEvent_Params params {};
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		params.ExternalSources = ExternalSources;
		params.EventName = EventName;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadInitBank
	 * 		Flags  -> ()
	 */
	void UAkGameplayStatics::LoadInitBank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadInitBank");
		
		UAkGameplayStatics_LoadInitBank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadBanks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UAkAudioBank*>                        SoundBanks                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               SynchronizeSoundBanks                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBanks");
		
		UAkGameplayStatics_LoadBanks_Params params {};
		params.SoundBanks = SoundBanks;
		params.SynchronizeSoundBanks = SynchronizeSoundBanks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadBankByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BankName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::LoadBankByName(const class FString& BankName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankByName");
		
		UAkGameplayStatics_LoadBankByName_Params params {};
		params.BankName = BankName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadBankAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              BankLoadedCallback                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::LoadBankAsync(class UAkAudioBank* Bank, const class FScriptDelegate& BankLoadedCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankAsync");
		
		UAkGameplayStatics_LoadBankAsync_Params params {};
		params.Bank = Bank;
		params.BankLoadedCallback = BankLoadedCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.LoadBank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      BankName                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBank");
		
		UAkGameplayStatics_LoadBank_Params params {};
		params.Bank = Bank;
		params.BankName = BankName;
		params.LatentInfo = LatentInfo;
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.IsGame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAkGameplayStatics::IsGame(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsGame");
		
		UAkGameplayStatics_IsGame_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.IsEditor
	 * 		Flags  -> ()
	 */
	bool UAkGameplayStatics::IsEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsEditor");
		
		UAkGameplayStatics_IsEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetSpeakerAngles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      SpeakerAngles                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		float                                              HeightAngle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DeviceShareset                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetSpeakerAngles");
		
		UAkGameplayStatics_GetSpeakerAngles_Params params {};
		params.DeviceShareset = DeviceShareset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpeakerAngles != nullptr)
			*SpeakerAngles = params.SpeakerAngles;
		if (HeightAngle != nullptr)
			*HeightAngle = params.HeightAngle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetRTPCValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERTPCValueType                                     InputValueType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERTPCValueType                                     OutputValueType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float* Value, ERTPCValueType* OutputValueType, class AActor* Actor, const class FName& RTPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetRTPCValue");
		
		UAkGameplayStatics_GetRTPCValue_Params params {};
		params.RTPCValue = RTPCValue;
		params.PlayingID = PlayingID;
		params.InputValueType = InputValueType;
		params.Actor = Actor;
		params.RTPC = RTPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (OutputValueType != nullptr)
			*OutputValueType = params.OutputValueType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	 * 		Flags  -> ()
	 */
	float UAkGameplayStatics::GetOcclusionScalingFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor");
		
		UAkGameplayStatics_GetOcclusionScalingFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	 * 		Flags  -> ()
	 */
	class FString UAkGameplayStatics::GetCurrentAudioCulture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture");
		
		UAkGameplayStatics_GetCurrentAudioCulture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	 * 		Flags  -> ()
	 */
	TArray<class FString> UAkGameplayStatics::GetAvailableAudioCultures()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures");
		
		UAkGameplayStatics_GetAvailableAudioCultures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkMediaAsset*                               Instance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UAkGameplayStatics::GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData");
		
		UAkGameplayStatics_GetAkMediaAssetUserData_Params params {};
		params.Instance = Instance;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetAkComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ComponentCreated                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAttachLocation                                    LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const class FName& AttachPointName, const struct FVector& Location, EAttachLocation LocationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkComponent");
		
		UAkGameplayStatics_GetAkComponent_Params params {};
		params.AttachToComponent = AttachToComponent;
		params.AttachPointName = AttachPointName;
		params.Location = Location;
		params.LocationType = LocationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComponentCreated != nullptr)
			*ComponentCreated = params.ComponentCreated;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioType*                                Instance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UAkGameplayStatics::GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData");
		
		UAkGameplayStatics_GetAkAudioTypeUserData_Params params {};
		params.Instance = Instance;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAkActionOnEventType                               ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAkCurveInterpolation                              FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID");
		
		UAkGameplayStatics_ExecuteActionOnPlayingID_Params params {};
		params.ActionType = ActionType;
		params.PlayingID = PlayingID;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAkActionOnEventType                               ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAkCurveInterpolation                              FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent");
		
		UAkGameplayStatics_ExecuteActionOnEvent_Params params {};
		params.AkEvent = AkEvent;
		params.ActionType = ActionType;
		params.Actor = Actor;
		params.TransitionDuration = TransitionDuration;
		params.FadeCurve = FadeCurve;
		params.PlayingID = PlayingID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.ClearBanks
	 * 		Flags  -> ()
	 */
	void UAkGameplayStatics::ClearBanks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearBanks");
		
		UAkGameplayStatics_ClearBanks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.CancelEventCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::CancelEventCallback(const class FScriptDelegate& PostEventCallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.CancelEventCallback");
		
		UAkGameplayStatics_CancelEventCallback_Params params {};
		params.PostEventCallback = PostEventCallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MarkerText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkGameplayStatics::AddOutputCaptureMarker(const class FString& MarkerText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker");
		
		UAkGameplayStatics_AddOutputCaptureMarker_Params params {};
		params.MarkerText = MarkerText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkGameplayStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkGameplayStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkEventCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkEventCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkEventCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetType
	 * 		Flags  -> ()
	 */
	EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetType");
		
		UAkMIDIEventCallbackInfo_GetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkMidiProgramChange                        AsProgramChange                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange");
		
		UAkMIDIEventCallbackInfo_GetProgramChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsProgramChange != nullptr)
			*AsProgramChange = params.AsProgramChange;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkMidiPitchBend                            AsPitchBend                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend");
		
		UAkMIDIEventCallbackInfo_GetPitchBend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPitchBend != nullptr)
			*AsPitchBend = params.AsPitchBend;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkMidiNoteOnOff                            AsNoteOn                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn");
		
		UAkMIDIEventCallbackInfo_GetNoteOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsNoteOn != nullptr)
			*AsNoteOn = params.AsNoteOn;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkMidiNoteOnOff                            AsNoteOff                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff");
		
		UAkMIDIEventCallbackInfo_GetNoteOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsNoteOff != nullptr)
			*AsNoteOff = params.AsNoteOff;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkMidiNoteAftertouch                       AsNoteAftertouch                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch");
		
		UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsNoteAftertouch != nullptr)
			*AsNoteAftertouch = params.AsNoteAftertouch;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkMidiGeneric                              AsGeneric                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric");
		
		UAkMIDIEventCallbackInfo_GetGeneric_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsGeneric != nullptr)
			*AsGeneric = params.AsGeneric;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkMidiChannelAftertouch                    AsChannelAftertouch                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch");
		
		UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsChannelAftertouch != nullptr)
			*AsChannelAftertouch = params.AsChannelAftertouch;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
	 * 		Flags  -> ()
	 */
	unsigned char UAkMIDIEventCallbackInfo::GetChannel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannel");
		
		UAkMIDIEventCallbackInfo_GetChannel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetCc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkMidiCc                                   AsCc                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetCc");
		
		UAkMIDIEventCallbackInfo_GetCc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsCc != nullptr)
			*AsCc = params.AsCc;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMIDIEventCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMIDIEventCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMIDIEventCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMarkerCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMarkerCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMarkerCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkDurationCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkDurationCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkDurationCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMusicSyncCallbackInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMusicSyncCallbackInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMusicSyncCallbackInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGeometryComponent.UpdateGeometry
	 * 		Flags  -> ()
	 */
	void UAkGeometryComponent::UpdateGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.UpdateGeometry");
		
		UAkGeometryComponent_UpdateGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGeometryComponent.SendGeometry
	 * 		Flags  -> ()
	 */
	void UAkGeometryComponent::SendGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.SendGeometry");
		
		UAkGeometryComponent_SendGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGeometryComponent.RemoveGeometry
	 * 		Flags  -> ()
	 */
	void UAkGeometryComponent::RemoveGeometry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.RemoveGeometry");
		
		UAkGeometryComponent_RemoveGeometry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkGeometryComponent.ConvertMesh
	 * 		Flags  -> ()
	 */
	void UAkGeometryComponent::ConvertMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.ConvertMesh");
		
		UAkGeometryComponent_ConvertMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkGeometryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkGeometryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGeometryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkGroupValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkGroupValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGroupValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering");
		
		UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkHololensInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkHololensInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkHololensInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkHololensPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkHololensPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkHololensPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkInitBankAssetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkInitBankAssetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkInitBankAssetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkInitBank.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkInitBank::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkInitBank");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkIOSInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkIOSInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkIOSInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkIOSPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkIOSPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkIOSPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText");
		
		UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params params {};
		params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString");
		
		UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params params {};
		params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkItemBoolPropertiesConv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkItemBoolPropertiesConv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemBoolPropertiesConv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemBoolProperties.SetSearchText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      newText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkItemBoolProperties::SetSearchText(const class FString& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.SetSearchText");
		
		UAkItemBoolProperties_SetSearchText_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemBoolProperties.GetSelectedProperty
	 * 		Flags  -> ()
	 */
	class FString UAkItemBoolProperties::GetSelectedProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSelectedProperty");
		
		UAkItemBoolProperties_GetSelectedProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemBoolProperties.GetSearchText
	 * 		Flags  -> ()
	 */
	class FString UAkItemBoolProperties::GetSearchText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSearchText");
		
		UAkItemBoolProperties_GetSearchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkItemBoolProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkItemBoolProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemBoolProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkPropertyToControl                        INAkPropertyToControl                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText");
		
		UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params params {};
		params.INAkPropertyToControl = INAkPropertyToControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkPropertyToControl                        INAkPropertyToControl                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString");
		
		UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params params {};
		params.INAkPropertyToControl = INAkPropertyToControl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkItemPropertiesConv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkItemPropertiesConv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemPropertiesConv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemProperties.SetSearchText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      newText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkItemProperties::SetSearchText(const class FString& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.SetSearchText");
		
		UAkItemProperties_SetSearchText_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemProperties.GetSelectedProperty
	 * 		Flags  -> ()
	 */
	class FString UAkItemProperties::GetSelectedProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSelectedProperty");
		
		UAkItemProperties_GetSelectedProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkItemProperties.GetSearchText
	 * 		Flags  -> ()
	 */
	class FString UAkItemProperties::GetSearchText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSearchText");
		
		UAkItemProperties_GetSearchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkItemProperties.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkItemProperties::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemProperties");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAcousticTextureSetComponent*              textureSetComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkLateReverbComponent::AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent");
		
		UAkLateReverbComponent_AssociateAkTextureSetComponent_Params params {};
		params.textureSetComponent = textureSetComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLateReverbComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLateReverbComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLinuxAArch64PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLinuxAArch64PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLinuxAArch64PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering");
		
		UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLinuxInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLinuxInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLinuxInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLinuxPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLinuxPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLinuxPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering");
		
		UAkMacInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMacInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMacInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMacInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMacPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMacPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMacPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMediaAssetData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMediaAssetData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMediaAssetData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMediaAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMediaAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMediaAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkLocalizedMediaAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkLocalizedMediaAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLocalizedMediaAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkExternalMediaAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkExternalMediaAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkExternalMediaAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPlatformInitialisationSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPlatformInitialisationSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPlatformInitialisationSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering");
		
		UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPS4InitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPS4InitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS4InitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPS4PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPS4PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS4PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPS5InitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPS5InitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS5InitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkDPXInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkDPXInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkDPXInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkPS5PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkPS5PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS5PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkReverbVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkReverbVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkRoomComponent.SetGeometryComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAcousticTextureSetComponent*              textureSetComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkRoomComponent::SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.SetGeometryComponent");
		
		UAkRoomComponent_SetGeometryComponent_Params params {};
		params.textureSetComponent = textureSetComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkRoomComponent.GetPrimitiveParent
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.GetPrimitiveParent");
		
		UAkRoomComponent_GetPrimitiveParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkRoomComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkRoomComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkRtpc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkRtpc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkRtpc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSettingsPerUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSettingsPerUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSettingsPerUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetValue(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetValue");
		
		UAkSlider_SetValue_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.SetStepSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetStepSize(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetStepSize");
		
		UAkSlider_SetStepSize_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.SetSliderHandleColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderHandleColor");
		
		UAkSlider_SetSliderHandleColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.SetSliderBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderBarColor");
		
		UAkSlider_SetSliderBarColor_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetLocked(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetLocked");
		
		UAkSlider_SetLocked_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.SetIndentHandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetIndentHandle(bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetIndentHandle");
		
		UAkSlider_SetIndentHandle_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.SetAkSliderItemProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemProperty                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetAkSliderItemProperty(const class FString& ItemProperty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemProperty");
		
		UAkSlider_SetAkSliderItemProperty_Params params {};
		params.ItemProperty = ItemProperty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.SetAkSliderItemId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuid                                       ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSlider::SetAkSliderItemId(const struct FGuid& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemId");
		
		UAkSlider_SetAkSliderItemId_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.GetValue
	 * 		Flags  -> ()
	 */
	float UAkSlider::GetValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetValue");
		
		UAkSlider_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.GetAkSliderItemProperty
	 * 		Flags  -> ()
	 */
	class FString UAkSlider::GetAkSliderItemProperty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemProperty");
		
		UAkSlider_GetAkSliderItemProperty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSlider.GetAkSliderItemId
	 * 		Flags  -> ()
	 */
	struct FGuid UAkSlider::GetAkSliderItemId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemId");
		
		UAkSlider_GetAkSliderItemId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSlider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSlider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSlider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkSpatialAudioVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkSpatialAudioVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAkSpotReflector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAkSpotReflector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSpotReflector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkStateValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkStateValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkStateValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSubmixInputComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSubmixInputComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSubmixInputComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	 * 		Flags  -> ()
	 */
	void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");
		
		UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	 * 		Flags  -> ()
	 */
	void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");
		
		UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	 * 		Flags  -> ()
	 */
	void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");
		
		UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSurfaceReflectorSetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSurfaceReflectorSetComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering");
		
		UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSwitchInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSwitchInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSwitchPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSwitchPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkSwitchValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkSwitchValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkTVOSInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkTVOSInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTVOSInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkTVOSPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkTVOSPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTVOSPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.Unsubscribe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      SubscriptionId                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               UnsubscriptionDone                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Unsubscribe");
		
		UAkWaapiCalls_Unsubscribe_Params params {};
		params.SubscriptionId = SubscriptionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnsubscriptionDone != nullptr)
			*UnsubscriptionDone = params.UnsubscriptionDone;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.SubscribeToWaapi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiUri                                 WaapiUri                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          WaapiOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FAkWaapiSubscriptionId                      SubscriptionId                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               SubscriptionDone                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const class FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SubscribeToWaapi");
		
		UAkWaapiCalls_SubscribeToWaapi_Params params {};
		params.WaapiUri = WaapiUri;
		params.WaapiOptions = WaapiOptions;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubscriptionId != nullptr)
			*SubscriptionId = params.SubscriptionId;
		if (SubscriptionDone != nullptr)
			*SubscriptionDone = params.SubscriptionDone;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.SetSubscriptionID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      Subscription                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkWaapiCalls::SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SetSubscriptionID");
		
		UAkWaapiCalls_SetSubscriptionID_Params params {};
		params.Subscription = Subscription;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback");
		
		UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback");
		
		UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params params {};
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.GetSubscriptionID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      Subscription                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UAkWaapiCalls::GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.GetSubscriptionID");
		
		UAkWaapiCalls_GetSubscriptionID_Params params {};
		params.Subscription = Subscription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText");
		
		UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params params {};
		params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString");
		
		UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params params {};
		params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiCalls.CallWaapi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiUri                                 WaapiUri                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          WaapiArgs                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          WaapiOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.CallWaapi");
		
		UAkWaapiCalls_CallWaapi_Params params {};
		params.WaapiUri = WaapiUri;
		params.WaapiArgs = WaapiArgs;
		params.WaapiOptions = WaapiOptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWaapiCalls.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWaapiCalls::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiCalls");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          INAkWaapiFieldNames                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText");
		
		USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params params {};
		params.INAkWaapiFieldNames = INAkWaapiFieldNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          INAkWaapiFieldNames                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString");
		
		USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params params {};
		params.INAkWaapiFieldNames = INAkWaapiFieldNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USAkWaapiFieldNamesConv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USAkWaapiFieldNamesConv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.SAkWaapiFieldNamesConv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetStringField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      FieldValue                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(const struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetStringField");
		
		UAkWaapiJsonManager_SetStringField_Params params {};
		params.FieldName = FieldName;
		params.FieldValue = FieldValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetObjectField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          FieldValue                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetObjectField");
		
		UAkWaapiJsonManager_SetObjectField_Params params {};
		params.FieldName = FieldName;
		params.FieldValue = FieldValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetNumberField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              FieldValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetNumberField");
		
		UAkWaapiJsonManager_SetNumberField_Params params {};
		params.FieldName = FieldName;
		params.FieldValue = FieldValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetBoolField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               FieldValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetBoolField");
		
		UAkWaapiJsonManager_SetBoolField_Params params {};
		params.FieldName = FieldName;
		params.FieldValue = FieldValue;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              FieldStringValues                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<class FString> FieldStringValues, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayStringFields");
		
		UAkWaapiJsonManager_SetArrayStringFields_Params params {};
		params.FieldName = FieldName;
		params.FieldStringValues = FieldStringValues;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAKWaapiJsonObject>                  FieldObjectValues                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields");
		
		UAkWaapiJsonManager_SetArrayObjectFields_Params params {};
		params.FieldName = FieldName;
		params.FieldObjectValues = FieldObjectValues;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetStringField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UAkWaapiJsonManager::GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetStringField");
		
		UAkWaapiJsonManager_GetStringField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetObjectField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetObjectField");
		
		UAkWaapiJsonManager_GetObjectField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetNumberField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	float UAkWaapiJsonManager::GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetNumberField");
		
		UAkWaapiJsonManager_GetNumberField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetIntegerField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t UAkWaapiJsonManager::GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetIntegerField");
		
		UAkWaapiJsonManager_GetIntegerField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetBoolField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	bool UAkWaapiJsonManager::GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetBoolField");
		
		UAkWaapiJsonManager_GetBoolField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.GetArrayField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetArrayField");
		
		UAkWaapiJsonManager_GetArrayField_Params params {};
		params.FieldName = FieldName;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAKWaapiJsonObject                          INAKWaapiJsonObject                                        (Parm, NativeAccessSpecifierPublic)
	 */
	class FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText");
		
		UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params params {};
		params.INAKWaapiJsonObject = INAKWaapiJsonObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAKWaapiJsonObject                          INAKWaapiJsonObject                                        (Parm, NativeAccessSpecifierPublic)
	 */
	class FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString");
		
		UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params params {};
		params.INAKWaapiJsonObject = INAKWaapiJsonObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWaapiJsonManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWaapiJsonManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiJsonManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiUri                                 INAkWaapiUri                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText");
		
		UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params params {};
		params.INAkWaapiUri = INAkWaapiUri;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAkWaapiUri                                 INAkWaapiUri                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString");
		
		UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params params {};
		params.INAkWaapiUri = INAkWaapiUri;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWaapiUriConv.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWaapiUriConv::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiUriConv");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering");
		
		UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWindowsInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWindowsInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWindowsInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWin32PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWin32PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWin32PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWin64PlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWin64PlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWin64PlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWindowsPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWindowsPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWindowsPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWwiseTree.SetSearchText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      newText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkWwiseTree::SetSearchText(const class FString& newText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.SetSearchText");
		
		UAkWwiseTree_SetSearchText_Params params {};
		params.newText = newText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWwiseTree.GetSelectedItem
	 * 		Flags  -> ()
	 */
	struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSelectedItem");
		
		UAkWwiseTree_GetSelectedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkWwiseTree.GetSearchText
	 * 		Flags  -> ()
	 */
	class FString UAkWwiseTree::GetSearchText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSearchText");
		
		UAkWwiseTree_GetSearchText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWwiseTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWwiseTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWwiseTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkWwiseTreeSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkWwiseTreeSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWwiseTreeSelector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering");
		
		UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXboxOneInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXboxOneInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOneInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXboxOnePlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXboxOnePlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOnePlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAkXSXInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering");
		
		UAkXSXInitializationSettings_MigrateMultiCoreRendering_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXSXInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXSXInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXSXInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkMPXInitializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkMPXInitializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMPXInitializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAkXSXPlatformInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAkXSXPlatformInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXSXPlatformInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioEventSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioEventSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioEventTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioEventTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioRTPCSection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioRTPCSection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovieSceneAkAudioRTPCTrack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovieSceneAkAudioRTPCTrack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.PostEventAsync.PostEventAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPostEventAsync* UPostEventAsync::PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, const class FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PostEventAsync");
		
		UPostEventAsync_PostEventAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AkEvent = AkEvent;
		params.Actor = Actor;
		params.CallbackMask = CallbackMask;
		params.PostEventCallback = PostEventCallback;
		params.ExternalSources = ExternalSources;
		params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.PostEventAsync.PollPostEventFuture
	 * 		Flags  -> ()
	 */
	void UPostEventAsync::PollPostEventFuture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PollPostEventFuture");
		
		UPostEventAsync_PollPostEventFuture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPostEventAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostEventAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.PostEventAsync");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class UPostEventAtLocationAsync* UPostEventAtLocationAsync::PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync");
		
		UPostEventAtLocationAsync_PostEventAtLocationAsync_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.AkEvent = AkEvent;
		params.Location = Location;
		params.Orientation = Orientation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	 * 		Flags  -> ()
	 */
	void UPostEventAtLocationAsync::PollPostEventFuture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture");
		
		UPostEventAtLocationAsync_PollPostEventFuture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPostEventAtLocationAsync.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostEventAtLocationAsync::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AkAudio.PostEventAtLocationAsync");
		return ptr;
	}

}


