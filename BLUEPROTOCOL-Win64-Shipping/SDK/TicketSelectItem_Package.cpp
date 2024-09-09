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
	 * 		Name   -> Function TicketSelectItem.TicketSelectItem_C.isValidTokenID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTicketSelectItem_C::isValidTokenID(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectItem.TicketSelectItem_C.isValidTokenID");
		
		UTicketSelectItem_C_isValidTokenID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectItem.TicketSelectItem_C.UpdateTokenNum
	 * 		Flags  -> ()
	 */
	void UTicketSelectItem_C::UpdateTokenNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectItem.TicketSelectItem_C.UpdateTokenNum");
		
		UTicketSelectItem_C_UpdateTokenNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectItem.TicketSelectItem_C.SetTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectItem_C::SetTextId(int32_t TicketId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectItem.TicketSelectItem_C.SetTextId");
		
		UTicketSelectItem_C_SetTextId_Params params {};
		params.TicketId = TicketId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTicketSelectItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTicketSelectItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TicketSelectItem.TicketSelectItem_C");
		return ptr;
	}

}


