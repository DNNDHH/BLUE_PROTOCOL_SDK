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
	 * 		Name   -> Function GuildDetailsMenu.GuildDetailsMenu_C.Initialize
	 * 		Flags  -> ()
	 */
	void UGuildDetailsMenu_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetailsMenu.GuildDetailsMenu_C.Initialize");
		
		UGuildDetailsMenu_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetailsMenu.GuildDetailsMenu_C.GetGuildComp
	 * 		Flags  -> ()
	 */
	class USBPlayerGuildComponent* UGuildDetailsMenu_C::GetGuildComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetailsMenu.GuildDetailsMenu_C.GetGuildComp");
		
		UGuildDetailsMenu_C_GetGuildComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetailsMenu.GuildDetailsMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildDetailsMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetailsMenu.GuildDetailsMenu_C.Construct");
		
		UGuildDetailsMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetailsMenu.GuildDetailsMenu_C.BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Edit                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildDetailsMenu_C::BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature(bool Edit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetailsMenu.GuildDetailsMenu_C.BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature");
		
		UGuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature_Params params {};
		params.Edit = Edit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetailsMenu.GuildDetailsMenu_C.OnCompleteGetGuildData_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetailsMenu_C::OnCompleteGetGuildData_Event(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetailsMenu.GuildDetailsMenu_C.OnCompleteGetGuildData_Event");
		
		UGuildDetailsMenu_C_OnCompleteGetGuildData_Event_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildDetailsMenu.GuildDetailsMenu_C.ExecuteUbergraph_GuildDetailsMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildDetailsMenu_C::ExecuteUbergraph_GuildDetailsMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildDetailsMenu.GuildDetailsMenu_C.ExecuteUbergraph_GuildDetailsMenu");
		
		UGuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildDetailsMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildDetailsMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildDetailsMenu.GuildDetailsMenu_C");
		return ptr;
	}

}


