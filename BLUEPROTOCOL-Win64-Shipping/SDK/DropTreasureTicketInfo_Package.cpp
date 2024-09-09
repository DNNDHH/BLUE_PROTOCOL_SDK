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
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDropTreasureTicketInfo_C::SetTicketState(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState");
		
		UDropTreasureTicketInfo_C_SetTicketState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState_Category
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMatchingMenuListCategory                          Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropTreasureTicketInfo_C::SetTicketState_Category(EMatchingMenuListCategory Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState_Category");
		
		UDropTreasureTicketInfo_C_SetTicketState_Category_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState_GameMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UDropTreasureTicketInfo_C::SetTicketState_GameMode(const class FString& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketState_GameMode");
		
		UDropTreasureTicketInfo_C_SetTicketState_GameMode_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.UpdateValue
	 * 		Flags  -> ()
	 */
	void UDropTreasureTicketInfo_C::UpdateValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.UpdateValue");
		
		UDropTreasureTicketInfo_C_UpdateValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.GetCountValueLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CountValueLimit                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropTreasureTicketInfo_C::GetCountValueLimit(int32_t* CountValueLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.GetCountValueLimit");
		
		UDropTreasureTicketInfo_C_GetCountValueLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CountValueLimit != nullptr)
			*CountValueLimit = params.CountValueLimit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetupToolTip
	 * 		Flags  -> ()
	 */
	void UDropTreasureTicketInfo_C::SetupToolTip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetupToolTip");
		
		UDropTreasureTicketInfo_C_SetupToolTip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Get_ImageSeparation_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UDropTreasureTicketInfo_C::Get_ImageSeparation_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Get_ImageSeparation_ToolTipWidget_1");
		
		UDropTreasureTicketInfo_C_Get_ImageSeparation_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Get_ImageTicketIcon_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UDropTreasureTicketInfo_C::Get_ImageTicketIcon_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Get_ImageTicketIcon_ToolTipWidget_1");
		
		UDropTreasureTicketInfo_C_Get_ImageTicketIcon_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetColorRedIfZero
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropTreasureTicketInfo_C::SetColorRedIfZero(class UTextBlock* Text, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetColorRedIfZero");
		
		UDropTreasureTicketInfo_C_SetColorRedIfZero_Params params {};
		params.Text = Text;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketValue
	 * 		Flags  -> ()
	 */
	void UDropTreasureTicketInfo_C::SetTicketValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.SetTicketValue");
		
		UDropTreasureTicketInfo_C_SetTicketValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UDropTreasureTicketInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.Construct");
		
		UDropTreasureTicketInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.ExecuteUbergraph_DropTreasureTicketInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropTreasureTicketInfo_C::ExecuteUbergraph_DropTreasureTicketInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropTreasureTicketInfo.DropTreasureTicketInfo_C.ExecuteUbergraph_DropTreasureTicketInfo");
		
		UDropTreasureTicketInfo_C_ExecuteUbergraph_DropTreasureTicketInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDropTreasureTicketInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropTreasureTicketInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DropTreasureTicketInfo.DropTreasureTicketInfo_C");
		return ptr;
	}

}


