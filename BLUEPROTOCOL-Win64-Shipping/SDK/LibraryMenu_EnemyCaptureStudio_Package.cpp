/**
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
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnemyModelCameraState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rotate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SideOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetEnemyModelCameraState(float Scale, float Rotate, float CameraHeight, float SideOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnemyModelCameraState");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState_Params params {};
		params.Scale = Scale;
		params.Rotate = Rotate;
		params.CameraHeight = CameraHeight;
		params.SideOffset = SideOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelDelete
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::ModelDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelDelete");
		
		ULibraryMenu_EnemyCaptureStudio_C_ModelDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.GetCaptureModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           EnemyCharacter                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::GetCaptureModel(class ASBEnemyCharacter** EnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.GetCaptureModel");
		
		ULibraryMenu_EnemyCaptureStudio_C_GetCaptureModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnemyCharacter != nullptr)
			*EnemyCharacter = params.EnemyCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioHidden
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsHidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetStudioHidden(bool InIsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioHidden");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetStudioHidden_Params params {};
		params.InIsHidden = InIsHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Setup and Load Asset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              LoadCompleteEvent                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FSBLibraryEnemyAppearanceData               EnemyData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetupandLoadAsset(const class FScriptDelegate& LoadCompleteEvent, const struct FSBLibraryEnemyAppearanceData& EnemyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Setup and Load Asset");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetupandLoadAsset_Params params {};
		params.LoadCompleteEvent = LoadCompleteEvent;
		params.EnemyData = EnemyData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetStudioVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioVisibility");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureZoomActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActiveZoom                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetCaptureZoomActive(bool ActiveZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureZoomActive");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive_Params params {};
		params.ActiveZoom = ActiveZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureRotateActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActiveRotate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetCaptureRotateActive(bool ActiveRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureRotateActive");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive_Params params {};
		params.ActiveRotate = ActiveRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureMoveActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ActiveMove                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetCaptureMoveActive(bool ActiveMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureMoveActive");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive_Params params {};
		params.ActiveMove = ActiveMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Construct");
		
		ULibraryMenu_EnemyCaptureStudio_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Construct_Studio
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::Construct_Studio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Construct_Studio");
		
		ULibraryMenu_EnemyCaptureStudio_C_Construct_Studio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ApplyExternalDirectionalLightRotation
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::ApplyExternalDirectionalLightRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ApplyExternalDirectionalLightRotation");
		
		ULibraryMenu_EnemyCaptureStudio_C_ApplyExternalDirectionalLightRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.LoadAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EnemyCharacterId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBLibraryEnemyViewSetting                         ViewSetting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLibraryEnemyWeaponSetting                       WeaponSetting                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::LoadAsset(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.LoadAsset");
		
		ULibraryMenu_EnemyCaptureStudio_C_LoadAsset_Params params {};
		params.EnemyCharacterId = EnemyCharacterId;
		params.ViewSetting = ViewSetting;
		params.WeaponSetting = WeaponSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoaded
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::OnModelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoaded");
		
		ULibraryMenu_EnemyCaptureStudio_C_OnModelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Destruct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Destruct");
		
		ULibraryMenu_EnemyCaptureStudio_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.DoDisableCaptureStudio
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::DoDisableCaptureStudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.DoDisableCaptureStudio");
		
		ULibraryMenu_EnemyCaptureStudio_C_DoDisableCaptureStudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.DoEnableCaptureStudio
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::DoEnableCaptureStudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.DoEnableCaptureStudio");
		
		ULibraryMenu_EnemyCaptureStudio_C_DoEnableCaptureStudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnableCaptureStudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetEnableCaptureStudio(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnableCaptureStudio");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetExternalDirectionalLightRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::SetExternalDirectionalLightRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetExternalDirectionalLightRotation");
		
		ULibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelStateUpdate
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::ModelStateUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelStateUpdate");
		
		ULibraryMenu_EnemyCaptureStudio_C_ModelStateUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoadedAllMipDelegate
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::OnModelLoadedAllMipDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoadedAllMipDelegate");
		
		ULibraryMenu_EnemyCaptureStudio_C_OnModelLoadedAllMipDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio");
		
		ULibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoadedAllMip__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::OnModelLoadedAllMip__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoadedAllMip__DelegateSignature");
		
		ULibraryMenu_EnemyCaptureStudio_C_OnModelLoadedAllMip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnLoadAssetComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::OnLoadAssetComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnLoadAssetComplete__DelegateSignature");
		
		ULibraryMenu_EnemyCaptureStudio_C_OnLoadAssetComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_CaptureStudioBase_C*                     InConstructedCaptureStudio                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_EnemyCaptureStudio_C::OnCaptureStudioConstructed__DelegateSignature(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature");
		
		ULibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature_Params params {};
		params.InConstructedCaptureStudio = InConstructedCaptureStudio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_EnemyCaptureStudio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_EnemyCaptureStudio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C");
		return ptr;
	}

}


