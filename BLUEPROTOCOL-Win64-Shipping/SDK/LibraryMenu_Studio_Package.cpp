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
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelDelete
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_Studio_C::ModelDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelDelete");
		
		ALibraryMenu_Studio_C_ModelDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.WeaponSetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsComplete                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALibraryMenu_Studio_C::WeaponSetup(bool* IsComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.WeaponSetup");
		
		ALibraryMenu_Studio_C_WeaponSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsComplete != nullptr)
			*IsComplete = params.IsComplete;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.GetModelActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_Studio_C::GetModelActor(class AActor** Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.GetModelActor");
		
		ALibraryMenu_Studio_C_GetModelActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelSetup
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_Studio_C::ModelSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelSetup");
		
		ALibraryMenu_Studio_C_ModelSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.LoadEnemyAsset
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_Studio_C::LoadEnemyAsset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.LoadEnemyAsset");
		
		ALibraryMenu_Studio_C_LoadEnemyAsset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_Studio_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveTick");
		
		ALibraryMenu_Studio_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnAssetLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALibraryMenu_Studio_C::OnAssetLoaded(bool bInResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnAssetLoaded");
		
		ALibraryMenu_Studio_C_OnAssetLoaded_Params params {};
		params.bInResult = bInResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.SetEnemyModelId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBLibraryEnemyViewSetting                         ViewSetting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBLibraryEnemyWeaponSetting                       WeaponSetting                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_Studio_C::SetEnemyModelId(const class FString& ID, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.SetEnemyModelId");
		
		ALibraryMenu_Studio_C_SetEnemyModelId_Params params {};
		params.ID = ID;
		params.ViewSetting = ViewSetting;
		params.WeaponSetting = WeaponSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnLoadEvent
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_Studio_C::OnLoadEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnLoadEvent");
		
		ALibraryMenu_Studio_C_OnLoadEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_Studio_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveDestroyed");
		
		ALibraryMenu_Studio_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           EnemyCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_Studio_C::OnWeaponEquip(class ASBEnemyCharacter* EnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponEquip");
		
		ALibraryMenu_Studio_C_OnWeaponEquip_Params params {};
		params.EnemyCharacter = EnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnSpawnWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           EnemyCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_Studio_C::OnSpawnWeapon(class ASBEnemyCharacter* EnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnSpawnWeapon");
		
		ALibraryMenu_Studio_C_OnSpawnWeapon_Params params {};
		params.EnemyCharacter = EnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.ExecuteUbergraph_LibraryMenu_Studio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_Studio_C::ExecuteUbergraph_LibraryMenu_Studio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.ExecuteUbergraph_LibraryMenu_Studio");
		
		ALibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnLoadedModelAllMip__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ALibraryMenu_Studio_C::OnLoadedModelAllMip__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnLoadedModelAllMip__DelegateSignature");
		
		ALibraryMenu_Studio_C_OnLoadedModelAllMip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponSetup__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           EnemyActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALibraryMenu_Studio_C::OnWeaponSetup__DelegateSignature(class ASBEnemyCharacter* EnemyActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponSetup__DelegateSignature");
		
		ALibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature_Params params {};
		params.EnemyActor = EnemyActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnSetModelData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALibraryMenu_Studio_C::OnSetModelData__DelegateSignature(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnSetModelData__DelegateSignature");
		
		ALibraryMenu_Studio_C_OnSetModelData__DelegateSignature_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALibraryMenu_Studio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALibraryMenu_Studio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LibraryMenu_Studio.LibraryMenu_Studio_C");
		return ptr;
	}

}


