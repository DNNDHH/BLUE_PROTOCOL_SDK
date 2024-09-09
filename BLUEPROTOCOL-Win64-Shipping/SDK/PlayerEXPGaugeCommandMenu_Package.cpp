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
	 * 		Name   -> Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetExpOverflowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsExpOverflowMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerEXPGaugeCommandMenu_C::SetExpOverflowMode(bool bInIsExpOverflowMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetExpOverflowMode");
		
		UPlayerEXPGaugeCommandMenu_C_SetExpOverflowMode_Params params {};
		params.bInIsExpOverflowMode = bInIsExpOverflowMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetGaugeUpdateStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsUpdateStop                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerEXPGaugeCommandMenu_C::SetGaugeUpdateStop(bool InIsUpdateStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.SetGaugeUpdateStop");
		
		UPlayerEXPGaugeCommandMenu_C_SetGaugeUpdateStop_Params params {};
		params.InIsUpdateStop = InIsUpdateStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerEXPGaugeCommandMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Construct");
		
		UPlayerEXPGaugeCommandMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerEXPGaugeCommandMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.Tick");
		
		UPlayerEXPGaugeCommandMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.ExecuteUbergraph_PlayerEXPGaugeCommandMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerEXPGaugeCommandMenu_C::ExecuteUbergraph_PlayerEXPGaugeCommandMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C.ExecuteUbergraph_PlayerEXPGaugeCommandMenu");
		
		UPlayerEXPGaugeCommandMenu_C_ExecuteUbergraph_PlayerEXPGaugeCommandMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerEXPGaugeCommandMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerEXPGaugeCommandMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerEXPGaugeCommandMenu.PlayerEXPGaugeCommandMenu_C");
		return ptr;
	}

}


