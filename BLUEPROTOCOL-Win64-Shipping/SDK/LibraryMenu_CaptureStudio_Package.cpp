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
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.NormalEffectCheck
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::NormalEffectCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.NormalEffectCheck");
		
		ALibraryMenu_CaptureStudio_C_NormalEffectCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.AvariteliaEffectCheck
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::AvariteliaEffectCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.AvariteliaEffectCheck");
		
		ALibraryMenu_CaptureStudio_C_AvariteliaEffectCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetCameraPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rotate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SideOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_CaptureStudio_C::SetCameraPosition(float Scale, float Rotate, float CameraHeight, float SideOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetCameraPosition");
		
		ALibraryMenu_CaptureStudio_C_SetCameraPosition_Params params {};
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
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelDelete
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::ModelDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelDelete");
		
		ALibraryMenu_CaptureStudio_C_ModelDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetupCameraPosition
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::SetupCameraPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetupCameraPosition");
		
		ALibraryMenu_CaptureStudio_C_SetupCameraPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.GetCaptureModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           EnemyCharacter                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_CaptureStudio_C::GetCaptureModel(class ASBEnemyCharacter** EnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.GetCaptureModel");
		
		ALibraryMenu_CaptureStudio_C_GetCaptureModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EnemyCharacter != nullptr)
			*EnemyCharacter = params.EnemyCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.WeaponSetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           EnemyCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_CaptureStudio_C::WeaponSetup(class ASBEnemyCharacter* EnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.WeaponSetup");
		
		ALibraryMenu_CaptureStudio_C_WeaponSetup_Params params {};
		params.EnemyCharacter = EnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.RegistShowActorModel
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::RegistShowActorModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.RegistShowActorModel");
		
		ALibraryMenu_CaptureStudio_C_RegistShowActorModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ResetModel
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::ResetModel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ResetModel");
		
		ALibraryMenu_CaptureStudio_C_ResetModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ReceiveBeginPlay");
		
		ALibraryMenu_CaptureStudio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetModelDataEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALibraryMenu_CaptureStudio_C::OnSetModelDataEvent(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetModelDataEvent");
		
		ALibraryMenu_CaptureStudio_C_OnSetModelDataEvent_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.LoadModelAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EnemyCharacterId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBLibraryEnemyViewSetting                         ViewSetting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLibraryEnemyWeaponSetting                       WeaponSetting                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_CaptureStudio_C::LoadModelAsset(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.LoadModelAsset");
		
		ALibraryMenu_CaptureStudio_C_LoadModelAsset_Params params {};
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
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelStateUpdate
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::ModelStateUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelStateUpdate");
		
		ALibraryMenu_CaptureStudio_C_ModelStateUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetWeaponEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           EnemyActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_CaptureStudio_C::OnSetWeaponEvent(class ASBEnemyCharacter* EnemyActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetWeaponEvent");
		
		ALibraryMenu_CaptureStudio_C_OnSetWeaponEvent_Params params {};
		params.EnemyActor = EnemyActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnLoadedModelAllMipEvent
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::OnLoadedModelAllMipEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnLoadedModelAllMipEvent");
		
		ALibraryMenu_CaptureStudio_C_OnLoadedModelAllMipEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ExecuteUbergraph_LibraryMenu_CaptureStudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_CaptureStudio_C::ExecuteUbergraph_LibraryMenu_CaptureStudio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ExecuteUbergraph_LibraryMenu_CaptureStudio");
		
		ALibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnModelLoadedAllMipDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::OnModelLoadedAllMipDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnModelLoadedAllMipDelegate__DelegateSignature");
		
		ALibraryMenu_CaptureStudio_C_OnModelLoadedAllMipDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnModelLoadedDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_CaptureStudio_C::OnModelLoadedDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnModelLoadedDelegate__DelegateSignature");
		
		ALibraryMenu_CaptureStudio_C_OnModelLoadedDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALibraryMenu_CaptureStudio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALibraryMenu_CaptureStudio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C");
		return ptr;
	}

}


