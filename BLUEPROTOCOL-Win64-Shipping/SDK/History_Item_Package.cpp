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
	 * 		Name   -> Function History_Item.History_Item_C.SetReasonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHistory_Item_C::SetReasonText(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Item.History_Item_C.SetReasonText");
		
		UHistory_Item_C_SetReasonText_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function History_Item.History_Item_C.SetActionTypeByTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBTextTableHash                            TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistory_Item_C::SetActionTypeByTextId(const struct FSBTextTableHash& TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Item.History_Item_C.SetActionTypeByTextId");
		
		UHistory_Item_C_SetActionTypeByTextId_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function History_Item.History_Item_C.SetAmountCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UHistory_Item_C::SetAmountCode(int32_t Num, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Item.History_Item_C.SetAmountCode");
		
		UHistory_Item_C_SetAmountCode_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function History_Item.History_Item_C.SetAmountNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Paid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Free                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHistory_Item_C::SetAmountNum(int32_t Paid, int32_t Free)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Item.History_Item_C.SetAmountNum");
		
		UHistory_Item_C_SetAmountNum_Params params {};
		params.Paid = Paid;
		params.Free = Free;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function History_Item.History_Item_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBHistoryType                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCashHistory                              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHistory_Item_C::SetData(ESBHistoryType Type, const struct FSBCashHistory& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function History_Item.History_Item_C.SetData");
		
		UHistory_Item_C_SetData_Params params {};
		params.Type = Type;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHistory_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHistory_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass History_Item.History_Item_C");
		return ptr;
	}

}


