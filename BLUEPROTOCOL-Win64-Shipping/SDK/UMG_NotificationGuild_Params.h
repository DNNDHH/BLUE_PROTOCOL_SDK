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
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.GetInviteGuildName
	 */
	struct UUMG_NotificationGuild_C_GetInviteGuildName_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.Construct
	 */
	struct UUMG_NotificationGuild_C_Construct_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.Init
	 */
	struct UUMG_NotificationGuild_C_Init_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnInviteArrived_Event
	 */
	struct UUMG_NotificationGuild_C_OnInviteArrived_Event_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.AppearIn
	 */
	struct UUMG_NotificationGuild_C_AppearIn_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.Disappear
	 */
	struct UUMG_NotificationGuild_C_Disappear_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnAnimationFinished
	 */
	struct UUMG_NotificationGuild_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnTimer
	 */
	struct UUMG_NotificationGuild_C_OnTimer_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.OpenNotificationDialog
	 */
	struct UUMG_NotificationGuild_C_OpenNotificationDialog_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.GetResultMultipleDialog
	 */
	struct UUMG_NotificationGuild_C_GetResultMultipleDialog_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnBtnAccept
	 */
	struct UUMG_NotificationGuild_C_OnBtnAccept_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnBtnReserve
	 */
	struct UUMG_NotificationGuild_C_OnBtnReserve_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnBtnCancel
	 */
	struct UUMG_NotificationGuild_C_OnBtnCancel_Params
	{	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.CloseDialog
	 */
	struct UUMG_NotificationGuild_C_CloseDialog_Params
	{
	public:
		ENotificationDialogStatus                                  DialogStatus;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.OnGuildInviteResponse
	 */
	struct UUMG_NotificationGuild_C_OnGuildInviteResponse_Params
	{
	public:
		bool                                                       isAccept;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_NotificationGuild.UMG_NotificationGuild_C.ExecuteUbergraph_UMG_NotificationGuild
	 */
	struct UUMG_NotificationGuild_C_ExecuteUbergraph_UMG_NotificationGuild_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
