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
	 * Function MailLimitIndicator.MailLimitIndicator_C.Construct
	 */
	struct UMailLimitIndicator_C_Construct_Params
	{	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateBookType
	 */
	struct UMailLimitIndicator_C_OnUpdateBookType_Params
	{	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateSkin
	 */
	struct UMailLimitIndicator_C_OnUpdateSkin_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.Show
	 */
	struct UMailLimitIndicator_C_Show_Params
	{	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.Hide
	 */
	struct UMailLimitIndicator_C_Hide_Params
	{	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.OnChangeCommandMenuFlag
	 */
	struct UMailLimitIndicator_C_OnChangeCommandMenuFlag_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.Destruct
	 */
	struct UMailLimitIndicator_C_Destruct_Params
	{	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.ChangeBorderColor
	 */
	struct UMailLimitIndicator_C_ChangeBorderColor_Params
	{	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.UIVisibleSettingChangeDelegates
	 */
	struct UMailLimitIndicator_C_UIVisibleSettingChangeDelegates_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.UpdateShow
	 */
	struct UMailLimitIndicator_C_UpdateShow_Params
	{	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.OnPhotoMode
	 */
	struct UMailLimitIndicator_C_OnPhotoMode_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MailLimitIndicator.MailLimitIndicator_C.ExecuteUbergraph_MailLimitIndicator
	 */
	struct UMailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
