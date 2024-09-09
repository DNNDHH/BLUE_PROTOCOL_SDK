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
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.CaptureScene
	 * 		Flags  -> ()
	 */
	void ABP_WeaponForCapture_Studio_C::CaptureScene()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.CaptureScene");
		
		ABP_WeaponForCapture_Studio_C_CaptureScene_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSceneCaptureEveryFrameFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCaptureEveryFrame                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WeaponForCapture_Studio_C::SetSceneCaptureEveryFrameFlag(bool InIsCaptureEveryFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSceneCaptureEveryFrameFlag");
		
		ABP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag_Params params {};
		params.InIsCaptureEveryFrame = InIsCaptureEveryFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASBWeapon*>                           InWeaponAssets                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_WeaponForCapture_Studio_C::SetSubWeapon(int32_t InWeaponID, TArray<class ASBWeapon*>* InWeaponAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeapon");
		
		ABP_WeaponForCapture_Studio_C_SetSubWeapon_Params params {};
		params.InWeaponID = InWeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWeaponAssets != nullptr)
			*InWeaponAssets = params.InWeaponAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASBWeapon*>                           InWeaponAssets                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_WeaponForCapture_Studio_C::SetMainWeapon(int32_t InWeaponID, TArray<class ASBWeapon*>* InWeaponAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeapon");
		
		ABP_WeaponForCapture_Studio_C_SetMainWeapon_Params params {};
		params.InWeaponID = InWeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InWeaponAssets != nullptr)
			*InWeaponAssets = params.InWeaponAssets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.GetWeaponInfoFromType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponType                                      InWeaponType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FST_WeaponForCapture_Info                   OutWeaponInfo                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_WeaponForCapture_Studio_C::GetWeaponInfoFromType(ESBWeaponType InWeaponType, struct FST_WeaponForCapture_Info* OutWeaponInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.GetWeaponInfoFromType");
		
		ABP_WeaponForCapture_Studio_C_GetWeaponInfoFromType_Params params {};
		params.InWeaponType = InWeaponType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWeaponInfo != nullptr)
			*OutWeaponInfo = params.OutWeaponInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ResetWeapon
	 * 		Flags  -> ()
	 */
	void ABP_WeaponForCapture_Studio_C::ResetWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ResetWeapon");
		
		ABP_WeaponForCapture_Studio_C_ResetWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeaponNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WeaponForCapture_Studio_C::SetMainWeaponNum(int32_t InWeaponNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeaponNum");
		
		ABP_WeaponForCapture_Studio_C_SetMainWeaponNum_Params params {};
		params.InWeaponNum = InWeaponNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.DestroyAllChildComponents
	 * 		Flags  -> ()
	 */
	void ABP_WeaponForCapture_Studio_C::DestroyAllChildComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.DestroyAllChildComponents");
		
		ABP_WeaponForCapture_Studio_C_DestroyAllChildComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_WeaponForCapture_Studio_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.UserConstructionScript");
		
		ABP_WeaponForCapture_Studio_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_WeaponForCapture_Studio_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveBeginPlay");
		
		ABP_WeaponForCapture_Studio_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetWeaponVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WeaponForCapture_Studio_C::SetWeaponVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetWeaponVisibility");
		
		ABP_WeaponForCapture_Studio_C_SetWeaponVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WeaponForCapture_Studio_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveEndPlay");
		
		ABP_WeaponForCapture_Studio_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeaponVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WeaponForCapture_Studio_C::SetSubWeaponVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeaponVisibility");
		
		ABP_WeaponForCapture_Studio_C_SetSubWeaponVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.LoadWeaponAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponItemId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WeaponForCapture_Studio_C::LoadWeaponAsset(int32_t InWeaponItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.LoadWeaponAsset");
		
		ABP_WeaponForCapture_Studio_C_LoadWeaponAsset_Params params {};
		params.InWeaponItemId = InWeaponItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnLoadWeaponAssetDelegate_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsMain                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class ASBWeapon*>                           Weapons                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_WeaponForCapture_Studio_C::OnLoadWeaponAssetDelegate_(int32_t WeaponID, bool IsMain, TArray<class ASBWeapon*> Weapons)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnLoadWeaponAssetDelegate_イベント");
		
		ABP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate__Params params {};
		params.WeaponID = WeaponID;
		params.IsMain = IsMain;
		params.Weapons = Weapons;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetAllWeaponVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_WeaponForCapture_Studio_C::SetAllWeaponVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetAllWeaponVisibility");
		
		ABP_WeaponForCapture_Studio_C_SetAllWeaponVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ExecuteUbergraph_BP_WeaponForCapture_Studio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WeaponForCapture_Studio_C::ExecuteUbergraph_BP_WeaponForCapture_Studio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ExecuteUbergraph_BP_WeaponForCapture_Studio");
		
		ABP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnWeaponLoadedDelegete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_WeaponForCapture_Studio_C::OnWeaponLoadedDelegete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnWeaponLoadedDelegete__DelegateSignature");
		
		ABP_WeaponForCapture_Studio_C_OnWeaponLoadedDelegete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WeaponForCapture_Studio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WeaponForCapture_Studio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C");
		return ptr;
	}

}


