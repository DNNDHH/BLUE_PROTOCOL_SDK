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
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.GetEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             EntryData                                                  (Parm, OutParm)
	 */
	void UGuildEntryListItem_C::GetEntry(struct FGuildEntryData* EntryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.GetEntry");
		
		UGuildEntryListItem_C_GetEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EntryData != nullptr)
			*EntryData = params.EntryData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.InitializeEntryData
	 * 		Flags  -> ()
	 */
	void UGuildEntryListItem_C::InitializeEntryData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.InitializeEntryData");
		
		UGuildEntryListItem_C_InitializeEntryData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.Set EntryData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildEntryData                             Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGuildEntryListItem_C::SetEntryData(const struct FGuildEntryData& Entry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.Set EntryData");
		
		UGuildEntryListItem_C_SetEntryData_Params params {};
		params.Entry = Entry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UGuildEntryListItem_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.BP_OnEntryReleased");
		
		UGuildEntryListItem_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildEntryListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemExpansionChanged");
		
		UGuildEntryListItem_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntryListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.OnListItemObjectSet");
		
		UGuildEntryListItem_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGuildEntryListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemSelectionChanged");
		
		UGuildEntryListItem_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.LoadFaceIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildEntryListItem_C::LoadFaceIcon(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.LoadFaceIcon");
		
		UGuildEntryListItem_C_LoadFaceIcon_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.Unselected
	 * 		Flags  -> ()
	 */
	void UGuildEntryListItem_C::Unselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.Unselected");
		
		UGuildEntryListItem_C_Unselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildEntryListItem.GuildEntryListItem_C.ExecuteUbergraph_GuildEntryListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildEntryListItem_C::ExecuteUbergraph_GuildEntryListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildEntryListItem.GuildEntryListItem_C.ExecuteUbergraph_GuildEntryListItem");
		
		UGuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildEntryListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildEntryListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildEntryListItem.GuildEntryListItem_C");
		return ptr;
	}

}


