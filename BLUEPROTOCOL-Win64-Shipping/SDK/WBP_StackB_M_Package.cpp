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
	 * 		Name   -> Function WBP_StackB_M.WBP_StackB_M_C.SetStackBIconOneItemBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStackBNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStackBMax                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsEffectiveDisplay                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StackB_M_C::SetStackBIconOneItemBase(int32_t InStackBNum, int32_t InStackBMax, bool InIsEffectiveDisplay, bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_M.WBP_StackB_M_C.SetStackBIconOneItemBase");
		
		UWBP_StackB_M_C_SetStackBIconOneItemBase_Params params {};
		params.InStackBNum = InStackBNum;
		params.InStackBMax = InStackBMax;
		params.InIsEffectiveDisplay = InIsEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon One ItembyWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponItemData                           Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StackB_M_C::SetStackBIconOneItembyWeaponData(const struct FSBWeaponItemData& Info, bool IsEffectiveDisplay, bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon One ItembyWeaponData");
		
		UWBP_StackB_M_C_SetStackBIconOneItembyWeaponData_Params params {};
		params.Info = Info;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon One Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StackB_M_C::SetStackBIconOneItem(const struct FOwnItemInfo& Info, bool IsEffectiveDisplay, bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon One Item");
		
		UWBP_StackB_M_C_SetStackBIconOneItem_Params params {};
		params.Info = Info;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_M.WBP_StackB_M_C.SetStackBIconEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StackB_M_C::SetStackBIconEffect(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_M.WBP_StackB_M_C.SetStackBIconEffect");
		
		UWBP_StackB_M_C_SetStackBIconEffect_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon MBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StackNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEffectiveDisplay                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StackB_M_C::SetStackBIconMBase(int32_t StackNum, bool IsEffectiveDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_M.WBP_StackB_M_C.Set Stack BIcon MBase");
		
		UWBP_StackB_M_C_SetStackBIconMBase_Params params {};
		params.StackNum = StackNum;
		params.IsEffectiveDisplay = IsEffectiveDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StackB_M_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StackB_M_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StackB_M.WBP_StackB_M_C");
		return ptr;
	}

}


