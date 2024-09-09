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
	 * Function BP_BattleHUD.BP_BattleHUD_C.IsEditMap
	 */
	struct ABP_BattleHUD_C_IsEditMap_Params
	{
	public:
		float                                                      PressTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.IsOtherPCListMenuVisible
	 */
	struct ABP_BattleHUD_C_IsOtherPCListMenuVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.IsChatWindowActive
	 */
	struct ABP_BattleHUD_C_IsChatWindowActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetPlaceGuideWidget
	 */
	struct ABP_BattleHUD_C_GetPlaceGuideWidget_Params
	{
	public:
		class UPlaceGuide_C*                                       PlaceGuideWidget;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnJoinInterreputQuestDelegete
	 */
	struct ABP_BattleHUD_C_OnJoinInterreputQuestDelegete_Params
	{
	public:
		class USBPlayerInterruptQuestComponent*                    InComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInFirst;                                                // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.UnbindOnJoinInterruptQuest
	 */
	struct ABP_BattleHUD_C_UnbindOnJoinInterruptQuest_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.BindOnJoinInterruptQuest
	 */
	struct ABP_BattleHUD_C_BindOnJoinInterruptQuest_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.Unbind
	 */
	struct ABP_BattleHUD_C_Unbind_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.Bind
	 */
	struct ABP_BattleHUD_C_Bind_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteTelopManager
	 */
	struct ABP_BattleHUD_C_DeleteTelopManager_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateTelopManager
	 */
	struct ABP_BattleHUD_C_CreateTelopManager_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatUnreadNotify
	 */
	struct ABP_BattleHUD_C_DeleteChatUnreadNotify_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateChatUnreadNotify
	 */
	struct ABP_BattleHUD_C_CreateChatUnreadNotify_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteStatusAlimentNotifyWidgetOwner
	 */
	struct ABP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateStatusAlimentNotifyWidgetOwner
	 */
	struct ABP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteOpenCommandMenu
	 */
	struct ABP_BattleHUD_C_DeleteOpenCommandMenu_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateOpenCommandMenu
	 */
	struct ABP_BattleHUD_C_CreateOpenCommandMenu_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteMailLimitIndicator
	 */
	struct ABP_BattleHUD_C_DeleteMailLimitIndicator_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateMailLimitIndicator
	 */
	struct ABP_BattleHUD_C_CreateMailLimitIndicator_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowSkit
	 */
	struct ABP_BattleHUD_C_DeleteTextWindowSkit_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowSkit
	 */
	struct ABP_BattleHUD_C_CreateTextWindowSkit_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindow
	 */
	struct ABP_BattleHUD_C_DeleteTextWindow_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindow
	 */
	struct ABP_BattleHUD_C_CreateTextWindow_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowDemo
	 */
	struct ABP_BattleHUD_C_DeleteTextWindowDemo_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowDemo
	 */
	struct ABP_BattleHUD_C_CreateTextWindowDemo_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifications
	 */
	struct ABP_BattleHUD_C_DeleteNotifications_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifications
	 */
	struct ABP_BattleHUD_C_CreateNotifications_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifyMessage
	 */
	struct ABP_BattleHUD_C_DeleteNotifyMessage_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifyMessage
	 */
	struct ABP_BattleHUD_C_CreateNotifyMessage_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteClassHUD
	 */
	struct ABP_BattleHUD_C_DeleteClassHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateClassHUD
	 */
	struct ABP_BattleHUD_C_CreateClassHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteShortPinHUD
	 */
	struct ABP_BattleHUD_C_DeleteShortPinHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateShortPinHUD
	 */
	struct ABP_BattleHUD_C_CreateShortPinHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatHUD
	 */
	struct ABP_BattleHUD_C_DeleteChatHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateChatHUD
	 */
	struct ABP_BattleHUD_C_CreateChatHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteKeyGuideHUD
	 */
	struct ABP_BattleHUD_C_DeleteKeyGuideHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateKeyGuideHUD
	 */
	struct ABP_BattleHUD_C_CreateKeyGuideHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteLayoutHUD
	 */
	struct ABP_BattleHUD_C_DeleteLayoutHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateLayoutHUD
	 */
	struct ABP_BattleHUD_C_CreateLayoutHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.UpdateBattleInfoHUD
	 */
	struct ABP_BattleHUD_C_UpdateBattleInfoHUD_Params
	{
	public:
		struct FSBInteractionInfo                                  InteractionInfo;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleInfoHUD
	 */
	struct ABP_BattleHUD_C_DeleteBattleInfoHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateBattleInfoHUD
	 */
	struct ABP_BattleHUD_C_CreateBattleInfoHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteHUD
	 */
	struct ABP_BattleHUD_C_DeleteHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateHUD
	 */
	struct ABP_BattleHUD_C_CreateHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetTelopManager
	 */
	struct ABP_BattleHUD_C_GetTelopManager_Params
	{
	public:
		class USBTelopManager*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetBattleContentsHUD
	 */
	struct ABP_BattleHUD_C_GetBattleContentsHUD_Params
	{
	public:
		class USBBattleContentsHUD*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetNotifyMessage
	 */
	struct ABP_BattleHUD_C_GetNotifyMessage_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetChatHUD
	 */
	struct ABP_BattleHUD_C_GetChatHUD_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowDemo
	 */
	struct ABP_BattleHUD_C_GetTextWindowDemo_Params
	{
	public:
		class USBTextWindowBase*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetLayoutableHUD
	 */
	struct ABP_BattleHUD_C_GetLayoutableHUD_Params
	{
	public:
		class USBLayoutableHUD*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.UnregistClassHud
	 */
	struct ABP_BattleHUD_C_UnregistClassHud_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowSkit
	 */
	struct ABP_BattleHUD_C_GetTextWindowSkit_Params
	{
	public:
		class USBTextWindowBase*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetRespawnHUD
	 */
	struct ABP_BattleHUD_C_GetRespawnHUD_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IZ2Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URespawnHUD_C*                                       RespawnHUD;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetOptionLayoutableHUD
	 */
	struct ABP_BattleHUD_C_GetOptionLayoutableHUD_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetHitIndicator
	 */
	struct ABP_BattleHUD_C_GetHitIndicator_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_93CX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UHitIndicator_C*                                     HitIndicator;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetHitFlash
	 */
	struct ABP_BattleHUD_C_GetHitFlash_Params
	{
	public:
		class UHitFlash_C*                                         refHitFlash;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindow
	 */
	struct ABP_BattleHUD_C_GetTextWindow_Params
	{
	public:
		class USBTextWindow*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnQuestUpdateProgress
	 */
	struct ABP_BattleHUD_C_OnQuestUpdateProgress_Params
	{
	public:
		struct FAcceptedQuestInfo                                  PrevAcceptedQuestInfo;                                   // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.IsLayoutEditMode
	 */
	struct ABP_BattleHUD_C_IsLayoutEditMode_Params
	{
	public:
		bool                                                       LayoutEditMode;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.SetLayoutEditMode
	 */
	struct ABP_BattleHUD_C_SetLayoutEditMode_Params
	{
	public:
		bool                                                       EditModeEnabled;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DrawWireLocator
	 */
	struct ABP_BattleHUD_C_DrawWireLocator_Params
	{
	public:
		int32_t                                                    SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SizeY;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_C39F708F49F4F4B3ADAF68B0B1BBE799
	 */
	struct ABP_BattleHUD_C_OnLoaded_C39F708F49F4F4B3ADAF68B0B1BBE799_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB
	 */
	struct ABP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8
	 */
	struct ABP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.InitTimerRespawnHUD
	 */
	struct ABP_BattleHUD_C_InitTimerRespawnHUD_Params
	{
	public:
		ETimerHUDType                                              HUDType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.InitDhcBattleHUD
	 */
	struct ABP_BattleHUD_C_InitDhcBattleHUD_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpClass
	 */
	struct ABP_BattleHUD_C_AddLevelUpClass_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpSkill
	 */
	struct ABP_BattleHUD_C_AddLevelUpSkill_Params
	{
	public:
		class FString                                              SkillType;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankupCompleteMessage
	 */
	struct ABP_BattleHUD_C_AddAdventurerRankupCompleteMessage_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateEventMenu
	 */
	struct ABP_BattleHUD_C_CreateEventMenu_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnCloseRmShopMenuEvent
	 */
	struct ABP_BattleHUD_C_OnCloseRmShopMenuEvent_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CreateRmShop
	 */
	struct ABP_BattleHUD_C_CreateRmShop_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.BindRmShop
	 */
	struct ABP_BattleHUD_C_BindRmShop_Params
	{
	public:
		class URmShopMenu_C*                                       InRmShop;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.UnbindRmShop
	 */
	struct ABP_BattleHUD_C_UnbindRmShop_Params
	{
	public:
		class URmShopMenu_C*                                       InRmShop;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteRmShop
	 */
	struct ABP_BattleHUD_C_DeleteRmShop_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.RequestDirectChat
	 */
	struct ABP_BattleHUD_C_RequestDirectChat_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           PrivilegeType;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.UpdateMouseCursorIcon
	 */
	struct ABP_BattleHUD_C_UpdateMouseCursorIcon_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.KeyShortcut_Stamp
	 */
	struct ABP_BattleHUD_C_KeyShortcut_Stamp_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnRequestTutorialHelp
	 */
	struct ABP_BattleHUD_C_OnRequestTutorialHelp_Params
	{
	public:
		bool                                                       bCheckUnlock;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CallUpdateInteractionNotice
	 */
	struct ABP_BattleHUD_C_CallUpdateInteractionNotice_Params
	{
	public:
		struct FSBInteractionInfo                                  InteractionInfo;                                         // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShowChatHUD
	 */
	struct ABP_BattleHUD_C_ShowChatHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ForceCloseChatHUD
	 */
	struct ABP_BattleHUD_C_ForceCloseChatHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingClose
	 */
	struct ABP_BattleHUD_C_ShortcutRingClose_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingOpen
	 */
	struct ABP_BattleHUD_C_ShortcutRingOpen_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingSwitch
	 */
	struct ABP_BattleHUD_C_ShortcutRingSwitch_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveRightRepeat
	 */
	struct ABP_BattleHUD_C_ItemSelectorMoveRightRepeat_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveRightPress
	 */
	struct ABP_BattleHUD_C_ItemSelectorMoveRightPress_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveLeftRepeat
	 */
	struct ABP_BattleHUD_C_ItemSelectorMoveLeftRepeat_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveLeftPress
	 */
	struct ABP_BattleHUD_C_ItemSelectorMoveLeftPress_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorExe
	 */
	struct ABP_BattleHUD_C_ItemSelectorExe_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.NextQuestInfo
	 */
	struct ABP_BattleHUD_C_NextQuestInfo_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.Switching Map
	 */
	struct ABP_BattleHUD_C_SwitchingMap_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.SetFocusActor
	 */
	struct ABP_BattleHUD_C_SetFocusActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.HitIndicatorAddMarker
	 */
	struct ABP_BattleHUD_C_HitIndicatorAddMarker_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OpenCursorModeToOtherPCMenu
	 */
	struct ABP_BattleHUD_C_OpenCursorModeToOtherPCMenu_Params
	{
	public:
		class ABP_PlayerCharacter_C*                               InOtherPC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.CallAddMemberDeadNotifyMessage
	 */
	struct ABP_BattleHUD_C_CallAddMemberDeadNotifyMessage_Params
	{
	public:
		class FText                                                MemberName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnClickedCloseChatHUD
	 */
	struct ABP_BattleHUD_C_OnClickedCloseChatHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuideUpdate
	 */
	struct ABP_BattleHUD_C_ChangeKeyGuideUpdate_Params
	{
	public:
		EKeyGuideType                                              InKeyGuideType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnSaveCharaConfigUpdate
	 */
	struct ABP_BattleHUD_C_OnSaveCharaConfigUpdate_Params
	{
	public:
		EKeyGuideType                                              InKeyGuideType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnShowCombo
	 */
	struct ABP_BattleHUD_C_OnShowCombo_Params
	{
	public:
		int32_t                                                    Combo;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawn
	 */
	struct ABP_BattleHUD_C_OnShowRespawn_Params
	{
	public:
		float                                                      InRespawnTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnDisableRespawn
	 */
	struct ABP_BattleHUD_C_OnDisableRespawn_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawnBattleArea
	 */
	struct ABP_BattleHUD_C_OnShowRespawnBattleArea_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnUpdateRespawnGauge
	 */
	struct ABP_BattleHUD_C_OnUpdateRespawnGauge_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.SetEditMode
	 */
	struct ABP_BattleHUD_C_SetEditMode_Params
	{
	public:
		bool                                                       bEditMode;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OpenInitSelect
	 */
	struct ABP_BattleHUD_C_OpenInitSelect_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuide1_2Visibility
	 */
	struct ABP_BattleHUD_C_ChangeKeyGuide1_2Visibility_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.BattleAreaDisableMessage
	 */
	struct ABP_BattleHUD_C_BattleAreaDisableMessage_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.SetBattleInfoHUDVisible
	 */
	struct ABP_BattleHUD_C_SetBattleInfoHUDVisible_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.SetKeyGuideTextVisible
	 */
	struct ABP_BattleHUD_C_SetKeyGuideTextVisible_Params
	{
	public:
		ESkillActionPosition                                       InSkillActionPosition;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsVisible;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF5
	 */
	struct ABP_BattleHUD_C_ShortcutRingExecuteF5_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF6
	 */
	struct ABP_BattleHUD_C_ShortcutRingExecuteF6_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF7
	 */
	struct ABP_BattleHUD_C_ShortcutRingExecuteF7_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF8
	 */
	struct ABP_BattleHUD_C_ShortcutRingExecuteF8_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF9
	 */
	struct ABP_BattleHUD_C_ShortcutRingExecuteF9_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF10
	 */
	struct ABP_BattleHUD_C_ShortcutRingExecuteF10_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF11
	 */
	struct ABP_BattleHUD_C_ShortcutRingExecuteF11_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF12
	 */
	struct ABP_BattleHUD_C_ShortcutRingExecuteF12_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnWarehouseAbilityUpdateDelegate_イベント_1
	 */
	struct ABP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate__1_Params
	{
	public:
		TArray<struct FSBWarehouseAbilityNotifyUIInfo>             UIInfo;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.BindWarehouseAbility
	 */
	struct ABP_BattleHUD_C_BindWarehouseAbility_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.UnbindWarehouseAbility
	 */
	struct ABP_BattleHUD_C_UnbindWarehouseAbility_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ConstructDebugMenu
	 */
	struct ABP_BattleHUD_C_ConstructDebugMenu_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DestructDebugMenu
	 */
	struct ABP_BattleHUD_C_DestructDebugMenu_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnChangedDebugValue
	 */
	struct ABP_BattleHUD_C_OnChangedDebugValue_Params
	{
	public:
		ESBDebugMenuType                                           MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EQYT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                RowName;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.TryShowQuestCompleteMessage_Delay
	 */
	struct ABP_BattleHUD_C_TryShowQuestCompleteMessage_Delay_Params
	{
	public:
		int32_t                                                    InQuestIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStepNo;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DelaySeconds;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddAwakeInterruptQuestMessage
	 */
	struct ABP_BattleHUD_C_AddAwakeInterruptQuestMessage_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddAchievementGainedMessage
	 */
	struct ABP_BattleHUD_C_AddAchievementGainedMessage_Params
	{
	public:
		int32_t                                                    InAchievementId;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddTutorialHelpMessage
	 */
	struct ABP_BattleHUD_C_AddTutorialHelpMessage_Params
	{
	public:
		class FName                                                InTutorialHelpId;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankUpdateCompleteMessage
	 */
	struct ABP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            Slot;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial_Core
	 */
	struct ABP_BattleHUD_C_OnGetMaterial_Core_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddAutoDeliveryQuestCompleteMessage
	 */
	struct ABP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                InCycle;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTRR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              QuestName;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddWarehouseAbilityNotifyMessage
	 */
	struct ABP_BattleHUD_C_AddWarehouseAbilityNotifyMessage_Params
	{
	public:
		TArray<struct FSBWarehouseAbilityNotifyUIInfo>             InParam;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddRecipeMessage
	 */
	struct ABP_BattleHUD_C_AddRecipeMessage_Params
	{
	public:
		ESBRecipeType                                              RecipeType;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7Y1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RecepiId;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddNetworkCafeLoginTimeNotificationMessage
	 */
	struct ABP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage_Params
	{
	public:
		int32_t                                                    NetworkCafeTotalTimePlayedToday;                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLoginTimeOnly;                                        // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddLoginBonusNotifyMessage
	 */
	struct ABP_BattleHUD_C_AddLoginBonusNotifyMessage_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddMemberDeadNotifyMessage
	 */
	struct ABP_BattleHUD_C_AddMemberDeadNotifyMessage_Params
	{
	public:
		class FText                                                MemberName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddMailAcceptLimitNotifyMessage
	 */
	struct ABP_BattleHUD_C_AddMailAcceptLimitNotifyMessage_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddRankingRewardNotifyMessage
	 */
	struct ABP_BattleHUD_C_AddRankingRewardNotifyMessage_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddLine1NotifyMessage
	 */
	struct ABP_BattleHUD_C_AddLine1NotifyMessage_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddLine1LNotifyMessage
	 */
	struct ABP_BattleHUD_C_AddLine1LNotifyMessage_Params
	{
	public:
		class FText                                                InMessage;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddLine2NotifyMessage
	 */
	struct ABP_BattleHUD_C_AddLine2NotifyMessage_Params
	{
	public:
		class FText                                                InMainMessage;                                           // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                InSubMessage;                                            // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.AddItemExpiryNotifyMessage
	 */
	struct ABP_BattleHUD_C_AddItemExpiryNotifyMessage_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ReceiveBeginPlay
	 */
	struct ABP_BattleHUD_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDrawHUD
	 */
	struct ABP_BattleHUD_C_ReceiveDrawHUD_Params
	{
	public:
		int32_t                                                    SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SizeY;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDestroyed
	 */
	struct ABP_BattleHUD_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.BindBalloonWidget
	 */
	struct ABP_BattleHUD_C_BindBalloonWidget_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnReceivedMessage
	 */
	struct ABP_BattleHUD_C_OnReceivedMessage_Params
	{
	public:
		class USBChatMessage*                                      Message;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBChatUIMessage                                    Mess;                                                    // 0x0008(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.UnbindBalloonWIdget
	 */
	struct ABP_BattleHUD_C_UnbindBalloonWIdget_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnReceiveUpdateQuestProgressEvent2
	 */
	struct ABP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial
	 */
	struct ABP_BattleHUD_C_OnGetMaterial_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.RegistClassHud
	 */
	struct ABP_BattleHUD_C_RegistClassHud_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnGameSettingAfter
	 */
	struct ABP_BattleHUD_C_OnGameSettingAfter_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ShowSimpleAlertByID
	 */
	struct ABP_BattleHUD_C_ShowSimpleAlertByID_Params
	{
	public:
		class FName                                                TextId;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnVisibleSetting
	 */
	struct ABP_BattleHUD_C_OnVisibleSetting_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.BindVisibleSetting
	 */
	struct ABP_BattleHUD_C_BindVisibleSetting_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.UnbindVisibleSetting
	 */
	struct ABP_BattleHUD_C_UnbindVisibleSetting_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleContentsHUD
	 */
	struct ABP_BattleHUD_C_DeleteBattleContentsHUD_Params
	{	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.ExecuteUbergraph_BP_BattleHUD
	 */
	struct ABP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BattleHUD.BP_BattleHUD_C.OnCloseRmShop__DelegateSignature
	 */
	struct ABP_BattleHUD_C_OnCloseRmShop__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
