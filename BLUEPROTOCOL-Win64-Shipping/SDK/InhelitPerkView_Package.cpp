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
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.DisableAllPurgeBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DisablePurgeBtn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInhelitPerkView_C::DisableAllPurgeBtn(bool DisablePurgeBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.DisableAllPurgeBtn");
		
		UInhelitPerkView_C_DisableAllPurgeBtn_Params params {};
		params.DisablePurgeBtn = DisablePurgeBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.DisableAllChangeBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDisableChangeBtn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInhelitPerkView_C::DisableAllChangeBtn(bool bDisableChangeBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.DisableAllChangeBtn");
		
		UInhelitPerkView_C_DisableAllChangeBtn_Params params {};
		params.bDisableChangeBtn = bDisableChangeBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView_AutoGenFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               SelectPerk                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkView_C::InhelitPerkView_AutoGenFunc(const struct FSBStackBPerk& SelectPerk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView_AutoGenFunc");
		
		UInhelitPerkView_C_InhelitPerkView_AutoGenFunc_Params params {};
		params.SelectPerk = SelectPerk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.SetBaseWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                BaseWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkView_C::SetBaseWeapon(const struct FOwnItemInfo& BaseWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.SetBaseWeapon");
		
		UInhelitPerkView_C_SetBaseWeapon_Params params {};
		params.BaseWeapon = BaseWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.SetPerkB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBStackBPerk>                       Perkb                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UInhelitPerkView_C::SetPerkB(TArray<struct FSBStackBPerk>* Perkb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.SetPerkB");
		
		UInhelitPerkView_C_SetPerkB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Perkb != nullptr)
			*Perkb = params.Perkb;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.Initialize
	 * 		Flags  -> ()
	 */
	void UInhelitPerkView_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.Initialize");
		
		UInhelitPerkView_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.GenerateView
	 * 		Flags  -> ()
	 */
	void UInhelitPerkView_C::GenerateView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.GenerateView");
		
		UInhelitPerkView_C_GenerateView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInhelitPerkView_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.PreConstruct");
		
		UInhelitPerkView_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView ChangePerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               SelectData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkView_C::InhelitPerkViewChangePerk(const struct FSBStackBPerk& SelectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.InhelitPerkView ChangePerk");
		
		UInhelitPerkView_C_InhelitPerkViewChangePerk_Params params {};
		params.SelectData = SelectData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.ExecuteUbergraph_InhelitPerkView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInhelitPerkView_C::ExecuteUbergraph_InhelitPerkView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.ExecuteUbergraph_InhelitPerkView");
		
		UInhelitPerkView_C_ExecuteUbergraph_InhelitPerkView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.PurgeRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               PurgeTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkView_C::PurgeRequest__DelegateSignature(const struct FSBStackBPerk& PurgeTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.PurgeRequest__DelegateSignature");
		
		UInhelitPerkView_C_PurgeRequest__DelegateSignature_Params params {};
		params.PurgeTarget = PurgeTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InhelitPerkView.InhelitPerkView_C.ChangePerkRequest__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               ChangeTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInhelitPerkView_C::ChangePerkRequest__DelegateSignature(const struct FSBStackBPerk& ChangeTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InhelitPerkView.InhelitPerkView_C.ChangePerkRequest__DelegateSignature");
		
		UInhelitPerkView_C_ChangePerkRequest__DelegateSignature_Params params {};
		params.ChangeTarget = ChangeTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInhelitPerkView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInhelitPerkView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InhelitPerkView.InhelitPerkView_C");
		return ptr;
	}

}


