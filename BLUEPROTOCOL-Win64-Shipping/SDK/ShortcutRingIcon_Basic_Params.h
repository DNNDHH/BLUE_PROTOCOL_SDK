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
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteError
	 */
	struct UShortcutRingIcon_Basic_C_OnExecuteError_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetVisibleShortcutIcon
	 */
	struct UShortcutRingIcon_Basic_C_OnSetVisibleShortcutIcon_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEnableToolTip
	 */
	struct UShortcutRingIcon_Basic_C_OnSetEnableToolTip_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetCoolTime
	 */
	struct UShortcutRingIcon_Basic_C_OnSetCoolTime_Params
	{
	public:
		bool                                                       InIsShow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetGrayOut
	 */
	struct UShortcutRingIcon_Basic_C_OnSetGrayOut_Params
	{
	public:
		bool                                                       InGrayOut;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteSupply
	 */
	struct UShortcutRingIcon_Basic_C_OnExecuteSupply_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBItemUseStatus                                           InItemUseStatus;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X0C9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnExecuteOwnItem
	 */
	struct UShortcutRingIcon_Basic_C_OnExecuteOwnItem_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InItemIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBItemUseStatus                                           InItemUseStatus;                                         // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D081[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetSupply
	 */
	struct UShortcutRingIcon_Basic_C_OnSetSupply_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InItemAmount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetStamp
	 */
	struct UShortcutRingIcon_Basic_C_OnSetStamp_Params
	{
	public:
		class FString                                              InStampId;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetEmotion
	 */
	struct UShortcutRingIcon_Basic_C_OnSetEmotion_Params
	{
	public:
		class FString                                              InEmotionId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnSetOwnItem
	 */
	struct UShortcutRingIcon_Basic_C_OnSetOwnItem_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnClearBP
	 */
	struct UShortcutRingIcon_Basic_C_OnClearBP_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.PlayAnimPressed
	 */
	struct UShortcutRingIcon_Basic_C_PlayAnimPressed_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ItemUseAfter
	 */
	struct UShortcutRingIcon_Basic_C_ItemUseAfter_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I4YF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.BindOnSaveItemStorage
	 */
	struct UShortcutRingIcon_Basic_C_BindOnSaveItemStorage_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.UnbindOnSaveItemStorage
	 */
	struct UShortcutRingIcon_Basic_C_UnbindOnSaveItemStorage_Params
	{	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseEnter
	 */
	struct UShortcutRingIcon_Basic_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.OnMouseLeave
	 */
	struct UShortcutRingIcon_Basic_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C.ExecuteUbergraph_ShortcutRingIcon_Basic
	 */
	struct UShortcutRingIcon_Basic_C_ExecuteUbergraph_ShortcutRingIcon_Basic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y2JC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
