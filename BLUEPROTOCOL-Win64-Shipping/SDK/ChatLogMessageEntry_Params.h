#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ChatLogMessageEntry.ChatLogMessageEntry_C.CreateChatMessage
	 */
	struct UChatLogMessageEntry_C_CreateChatMessage_Params
	{
	public:
		struct FSBChatUIMessage                                    InMessage;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      StampSize;                                               // 0x0070(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEndInit;                                               // 0x0074(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCursorStampHit;                                        // 0x0075(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUnreadWidget;                                          // 0x0076(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCopy;                                                  // 0x0077(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnEntryReleased
	 */
	struct UChatLogMessageEntry_C_BP_OnEntryReleased_Params
	{	};

	/**
	 * Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemExpansionChanged
	 */
	struct UChatLogMessageEntry_C_BP_OnItemExpansionChanged_Params
	{
	public:
		bool                                                       bIsExpanded;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemSelectionChanged
	 */
	struct UChatLogMessageEntry_C_BP_OnItemSelectionChanged_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogMessageEntry.ChatLogMessageEntry_C.OnListItemObjectSet
	 */
	struct UChatLogMessageEntry_C_OnListItemObjectSet_Params
	{
	public:
		class UObject*                                             ListItemObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogMessageEntry.ChatLogMessageEntry_C.DircetChat
	 */
	struct UChatLogMessageEntry_C_DircetChat_Params
	{
	public:
		class FString                                              TagertPlayerId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                TagertName;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           PrivilegeType;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogMessageEntry.ChatLogMessageEntry_C.ExecuteUbergraph_ChatLogMessageEntry
	 */
	struct UChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
