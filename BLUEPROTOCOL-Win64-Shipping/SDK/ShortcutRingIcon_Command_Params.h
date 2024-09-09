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
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnExecuteError
	 */
	struct UShortcutRingIcon_Command_C_OnExecuteError_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnSetEnableToolTip
	 */
	struct UShortcutRingIcon_Command_C_OnSetEnableToolTip_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldAbbrStr
	 */
	struct UShortcutRingIcon_Command_C_GetBookmarkFieldAbbrStr_Params
	{
	public:
		EShortcutIconCommandID                                     CommandID;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4T8D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutString;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetBookmarkFieldStr
	 */
	struct UShortcutRingIcon_Command_C_GetBookmarkFieldStr_Params
	{
	public:
		EShortcutIconCommandID                                     CommandID;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QIMV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutString;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsStr
	 */
	struct UShortcutRingIcon_Command_C_GetKeyconfigItemsStr_Params
	{
	public:
		EShortcutIconCommandID                                     CommandID;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6XCB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutString;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetKeyconfigItemsTextID
	 */
	struct UShortcutRingIcon_Command_C_GetKeyconfigItemsTextID_Params
	{
	public:
		EConfig_KeyconfigItems                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CST8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TextId;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.CommandIDToKeyconfigItems
	 */
	struct UShortcutRingIcon_Command_C_CommandIDToKeyconfigItems_Params
	{
	public:
		EShortcutIconCommandID                                     InId;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EConfig_KeyconfigItems                                     KeyConfigItems;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.GetToolTip
	 */
	struct UShortcutRingIcon_Command_C_GetToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.PlayAnimPressed
	 */
	struct UShortcutRingIcon_Command_C_PlayAnimPressed_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseEnter
	 */
	struct UShortcutRingIcon_Command_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.OnMouseLeave
	 */
	struct UShortcutRingIcon_Command_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Command.ShortcutRingIcon_Command_C.ExecuteUbergraph_ShortcutRingIcon_Command
	 */
	struct UShortcutRingIcon_Command_C_ExecuteUbergraph_ShortcutRingIcon_Command_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
