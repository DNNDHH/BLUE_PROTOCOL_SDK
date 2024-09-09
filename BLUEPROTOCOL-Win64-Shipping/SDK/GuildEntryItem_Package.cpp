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
	 * 		Name   -> Function GuildEntryItem.GuildEntryItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildEntryItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryItem.GuildEntryItem_C.Construct");
		
		UGuildEntryItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryItem.GuildEntryItem_C.BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UGuildEntryItem_C::BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryItem.GuildEntryItem_C.BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UGuildEntryItem_C_BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryItem.GuildEntryItem_C.Unselected
	 * 		Flags  -> ()
	 */
	void UGuildEntryItem_C::Unselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryItem.GuildEntryItem_C.Unselected");
		
		UGuildEntryItem_C_Unselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryItem.GuildEntryItem_C.Selected
	 * 		Flags  -> ()
	 */
	void UGuildEntryItem_C::Selected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryItem.GuildEntryItem_C.Selected");
		
		UGuildEntryItem_C_Selected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryItem.GuildEntryItem_C.ExecuteUbergraph_GuildEntryItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntryItem_C::ExecuteUbergraph_GuildEntryItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryItem.GuildEntryItem_C.ExecuteUbergraph_GuildEntryItem");
		
		UGuildEntryItem_C_ExecuteUbergraph_GuildEntryItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryItem.GuildEntryItem_C.OnClicked_GuildEntry__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             GuildEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UGuildEntryItem_C*                           SelectedBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntryItem_C::OnClicked_GuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry, class UGuildEntryItem_C* SelectedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryItem.GuildEntryItem_C.OnClicked_GuildEntry__DelegateSignature");
		
		UGuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature_Params params {};
		params.GuildEntry = GuildEntry;
		params.SelectedBtn = SelectedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildEntryItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildEntryItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildEntryItem.GuildEntryItem_C");
		return ptr;
	}

}


