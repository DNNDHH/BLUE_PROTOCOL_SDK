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
	 * 		Name   -> Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildActivityBeforeStack_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Construct");
		
		UGuildActivityBeforeStack_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Add Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBUIGuildActivityUMGBase*                   Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildActivityBeforeStack_C::AddData(class USBUIGuildActivityUMGBase* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.Add Data");
		
		UGuildActivityBeforeStack_C_AddData_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.SetDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildActivityBeforeStack_C::SetDateTime(const struct FDateTime& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.SetDateTime");
		
		UGuildActivityBeforeStack_C_SetDateTime_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.ExecuteUbergraph_GuildActivityBeforeStack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildActivityBeforeStack_C::ExecuteUbergraph_GuildActivityBeforeStack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildActivityBeforeStack.GuildActivityBeforeStack_C.ExecuteUbergraph_GuildActivityBeforeStack");
		
		UGuildActivityBeforeStack_C_ExecuteUbergraph_GuildActivityBeforeStack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildActivityBeforeStack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildActivityBeforeStack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildActivityBeforeStack.GuildActivityBeforeStack_C");
		return ptr;
	}

}


