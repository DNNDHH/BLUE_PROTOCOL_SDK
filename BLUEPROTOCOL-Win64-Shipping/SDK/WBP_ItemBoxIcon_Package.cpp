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
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBoxResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBItemBoxResultItemData                    ItemBoxResultItemData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_ItemBoxIcon_C::SetItemBoxResult(const struct FSBItemBoxResultItemData& ItemBoxResultItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBoxResult");
		
		UWBP_ItemBoxIcon_C_SetItemBoxResult_Params params {};
		params.ItemBoxResultItemData = ItemBoxResultItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetIItemBoxToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_ToolTipInfo                             InToolTipInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxIcon_C::SetIItemBoxToolTip(struct FST_ToolTipInfo* InToolTipInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetIItemBoxToolTip");
		
		UWBP_ItemBoxIcon_C_SetIItemBoxToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InToolTipInfo != nullptr)
			*InToolTipInfo = params.InToolTipInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBItemBoxContentParam                      SBItemBoxContentParam                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UWBP_ItemBoxIcon_C::SetItemBox(const struct FSBItemBoxContentParam& SBItemBoxContentParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBox");
		
		UWBP_ItemBoxIcon_C_SetItemBox_Params params {};
		params.SBItemBoxContentParam = SBItemBoxContentParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Reward Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxIcon_C::SetRewardItem(ESBRewardItemType RewardItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Reward Item");
		
		UWBP_ItemBoxIcon_C_SetRewardItem_Params params {};
		params.RewardItemType = RewardItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Select Num
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Nu                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxIcon_C::SetSelectNum(int32_t Nu, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Select Num");
		
		UWBP_ItemBoxIcon_C_SetSelectNum_Params params {};
		params.Nu = Nu;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxIcon_C::IsSelected(bool* bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.IsSelected");
		
		UWBP_ItemBoxIcon_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelected != nullptr)
			*bSelected = params.bSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Icon Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxIcon_C::SetIconSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Icon Selected");
		
		UWBP_ItemBoxIcon_C_SetIconSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnidentified                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxIcon_C::SetItem(int32_t Index, EItemType Type, bool IsUnidentified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItem");
		
		UWBP_ItemBoxIcon_C_SetItem_Params params {};
		params.Index = Index;
		params.Type = Type;
		params.IsUnidentified = IsUnidentified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxIcon_C::BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ItemBoxIcon_C_BndEvt__SBButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.ExecuteUbergraph_WBP_ItemBoxIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxIcon_C::ExecuteUbergraph_WBP_ItemBoxIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.ExecuteUbergraph_WBP_ItemBoxIcon");
		
		UWBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ItemBoxIcon_C*                          Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxIcon_C::OnClick__DelegateSignature(class UWBP_ItemBoxIcon_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnClick__DelegateSignature");
		
		UWBP_ItemBoxIcon_C_OnClick__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnAppraisalFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemBoxIcon_C::OnAppraisalFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnAppraisalFinish__DelegateSignature");
		
		UWBP_ItemBoxIcon_C_OnAppraisalFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemBoxIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemBoxIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemBoxIcon.WBP_ItemBoxIcon_C");
		return ptr;
	}

}


