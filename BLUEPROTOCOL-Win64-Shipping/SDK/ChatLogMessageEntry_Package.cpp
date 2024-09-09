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
	 * 		Name   -> Function ChatLogMessageEntry.ChatLogMessageEntry_C.CreateChatMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              StampSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEndInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCursorStampHit                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUnreadWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCopy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogMessageEntry_C::CreateChatMessage(const struct FSBChatUIMessage& InMessage, float StampSize, bool IsEndInit, bool IsCursorStampHit, bool IsUnreadWidget, bool IsCopy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMessageEntry.ChatLogMessageEntry_C.CreateChatMessage");
		
		UChatLogMessageEntry_C_CreateChatMessage_Params params {};
		params.InMessage = InMessage;
		params.StampSize = StampSize;
		params.IsEndInit = IsEndInit;
		params.IsCursorStampHit = IsCursorStampHit;
		params.IsUnreadWidget = IsUnreadWidget;
		params.IsCopy = IsCopy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UChatLogMessageEntry_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnEntryReleased");
		
		UChatLogMessageEntry_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogMessageEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemExpansionChanged");
		
		UChatLogMessageEntry_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogMessageEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemSelectionChanged");
		
		UChatLogMessageEntry_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMessageEntry.ChatLogMessageEntry_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogMessageEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMessageEntry.ChatLogMessageEntry_C.OnListItemObjectSet");
		
		UChatLogMessageEntry_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMessageEntry.ChatLogMessageEntry_C.DircetChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TagertPlayerId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        TagertName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBPrivilegeType                                   PrivilegeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogMessageEntry_C::DircetChat(const class FString& TagertPlayerId, const class FText& TagertName, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMessageEntry.ChatLogMessageEntry_C.DircetChat");
		
		UChatLogMessageEntry_C_DircetChat_Params params {};
		params.TagertPlayerId = TagertPlayerId;
		params.TagertName = TagertName;
		params.CharacterId = CharacterId;
		params.PrivilegeType = PrivilegeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMessageEntry.ChatLogMessageEntry_C.ExecuteUbergraph_ChatLogMessageEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogMessageEntry_C::ExecuteUbergraph_ChatLogMessageEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMessageEntry.ChatLogMessageEntry_C.ExecuteUbergraph_ChatLogMessageEntry");
		
		UChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogMessageEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogMessageEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogMessageEntry.ChatLogMessageEntry_C");
		return ptr;
	}

}


