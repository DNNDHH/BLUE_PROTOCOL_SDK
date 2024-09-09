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
	 * 		Name   -> Function TicketSpecialDisp.TicketSpecialDisp_C.SetTextColorMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTicketSpecialDisp_C::SetTextColorMax(class UTextBlock* , bool bIsMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSpecialDisp.TicketSpecialDisp_C.SetTextColorMax");
		
		UTicketSpecialDisp_C_SetTextColorMax_Params params {};
		params. = ;
		params.bIsMax = bIsMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSpecialDisp.TicketSpecialDisp_C.CheckChangeColor
	 * 		Flags  -> ()
	 */
	void UTicketSpecialDisp_C::CheckChangeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSpecialDisp.TicketSpecialDisp_C.CheckChangeColor");
		
		UTicketSpecialDisp_C_CheckChangeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSpecialDisp.TicketSpecialDisp_C.SetBaseInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                BaseOwnItemInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTicketSpecialDisp_C::SetBaseInfo(const struct FOwnItemInfo& BaseOwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSpecialDisp.TicketSpecialDisp_C.SetBaseInfo");
		
		UTicketSpecialDisp_C_SetBaseInfo_Params params {};
		params.BaseOwnItemInfo = BaseOwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSpecialDisp.TicketSpecialDisp_C.SetChangeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChangeColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTicketSpecialDisp_C::SetChangeColor(bool bChangeColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSpecialDisp.TicketSpecialDisp_C.SetChangeColor");
		
		UTicketSpecialDisp_C_SetChangeColor_Params params {};
		params.bChangeColor = bChangeColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSpecialDisp.TicketSpecialDisp_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTicketSpecialDisp_C::SetInfo(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSpecialDisp.TicketSpecialDisp_C.SetInfo");
		
		UTicketSpecialDisp_C_SetInfo_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTicketSpecialDisp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTicketSpecialDisp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TicketSpecialDisp.TicketSpecialDisp_C");
		return ptr;
	}

}


