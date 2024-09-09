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
	 * 		Name   -> Function P020HUD.P020HUD_C.OnChangeVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisibleSetting                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP020HUD_C::OnChangeVisibleSetting(bool InIsVisibleSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.OnChangeVisibleSetting");
		
		UP020HUD_C_OnChangeVisibleSetting_Params params {};
		params.InIsVisibleSetting = InIsVisibleSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020HUD.P020HUD_C.OnSetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEdit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP020HUD_C::OnSetEditMode(bool InIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.OnSetEditMode");
		
		UP020HUD_C_OnSetEditMode_Params params {};
		params.InIsEdit = InIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020HUD.P020HUD_C.OnTerminate
	 * 		Flags  -> ()
	 */
	void UP020HUD_C::OnTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.OnTerminate");
		
		UP020HUD_C_OnTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020HUD.P020HUD_C.OnInitialize
	 * 		Flags  -> ()
	 */
	void UP020HUD_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.OnInitialize");
		
		UP020HUD_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020HUD.P020HUD_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UP020HUD_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.OnUnbind");
		
		UP020HUD_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020HUD.P020HUD_C.OnBind
	 * 		Flags  -> ()
	 */
	void UP020HUD_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.OnBind");
		
		UP020HUD_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020HUD.P020HUD_C.PlayAnimReverseInOut
	 * 		Flags  -> ()
	 */
	void UP020HUD_C::PlayAnimReverseInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.PlayAnimReverseInOut");
		
		UP020HUD_C_PlayAnimReverseInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020HUD.P020HUD_C.PlayAnimForwardInOut
	 * 		Flags  -> ()
	 */
	void UP020HUD_C::PlayAnimForwardInOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.PlayAnimForwardInOut");
		
		UP020HUD_C_PlayAnimForwardInOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020HUD.P020HUD_C.GetAttackUpRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rank                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP020HUD_C::GetAttackUpRank(int32_t* Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020HUD.P020HUD_C.GetAttackUpRank");
		
		UP020HUD_C_GetAttackUpRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rank != nullptr)
			*Rank = params.Rank;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP020HUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP020HUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P020HUD.P020HUD_C");
		return ptr;
	}

}


