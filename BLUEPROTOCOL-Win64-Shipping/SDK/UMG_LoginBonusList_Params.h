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
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnCloseAnimationFinished
	 */
	struct UUMG_LoginBonusList_C_OnCloseAnimationFinished_Params
	{	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetupMouseClickEvent
	 */
	struct UUMG_LoginBonusList_C_SetupMouseClickEvent_Params
	{	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.PlayStampAnimation
	 */
	struct UUMG_LoginBonusList_C_PlayStampAnimation_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Play;                                                    // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KTKN[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.SetData
	 */
	struct UUMG_LoginBonusList_C_SetData_Params
	{
	public:
		struct FSBLoginBonusWindowData                             DataList;                                                // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       MouseClick;                                              // 0x00A0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GP1I[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.Construct
	 */
	struct UUMG_LoginBonusList_C_Construct_Params
	{	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.Initialize
	 */
	struct UUMG_LoginBonusList_C_Initialize_Params
	{	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnStumpAnimationFinish
	 */
	struct UUMG_LoginBonusList_C_OnStumpAnimationFinish_Params
	{	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.Finish
	 */
	struct UUMG_LoginBonusList_C_Finish_Params
	{	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnImageLoadComplete
	 */
	struct UUMG_LoginBonusList_C_OnImageLoadComplete_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListItemClick
	 */
	struct UUMG_LoginBonusList_C_OnListItemClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TOVJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUMG_LoginBonusListLineItem_C*                       SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.ExecuteUbergraph_UMG_LoginBonusList
	 */
	struct UUMG_LoginBonusList_C_ExecuteUbergraph_UMG_LoginBonusList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.ListItemClick__DelegateSignature
	 */
	struct UUMG_LoginBonusList_C_ListItemClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.OnListInitComplete__DelegateSignature
	 */
	struct UUMG_LoginBonusList_C_OnListInitComplete__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_LoginBonusList.UMG_LoginBonusList_C.StumpAnimationFinish__DelegateSignature
	 */
	struct UUMG_LoginBonusList_C_StumpAnimationFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
