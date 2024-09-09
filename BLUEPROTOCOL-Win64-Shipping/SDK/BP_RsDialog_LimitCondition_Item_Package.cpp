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
	 * 		Name   -> Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.SetItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAchieve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_LimitCondition_Item_C::SetItemInfo(bool IsAchieve, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.SetItemInfo");
		
		UBP_RsDialog_LimitCondition_Item_C_SetItemInfo_Params params {};
		params.IsAchieve = IsAchieve;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.ExecuteUbergraph_BP_RsDialog_LimitCondition_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_LimitCondition_Item_C::ExecuteUbergraph_BP_RsDialog_LimitCondition_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.ExecuteUbergraph_BP_RsDialog_LimitCondition_Item");
		
		UBP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialog_LimitCondition_Item_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.OnButtonClicked__DelegateSignature");
		
		UBP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialog_LimitCondition_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialog_LimitCondition_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C");
		return ptr;
	}

}


