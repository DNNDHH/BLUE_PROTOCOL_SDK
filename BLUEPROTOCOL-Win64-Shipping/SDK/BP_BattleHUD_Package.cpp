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
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.IsEditMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PressTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::IsEditMap(float PressTime, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.IsEditMap");
		
		ABP_BattleHUD_C_IsEditMap_Params params {};
		params.PressTime = PressTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.IsOtherPCListMenuVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::IsOtherPCListMenuVisible(bool* Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.IsOtherPCListMenuVisible");
		
		ABP_BattleHUD_C_IsOtherPCListMenuVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.IsChatWindowActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::IsChatWindowActive(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.IsChatWindowActive");
		
		ABP_BattleHUD_C_IsChatWindowActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetPlaceGuideWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlaceGuide_C*                               PlaceGuideWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::GetPlaceGuideWidget(class UPlaceGuide_C** PlaceGuideWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetPlaceGuideWidget");
		
		ABP_BattleHUD_C_GetPlaceGuideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlaceGuideWidget != nullptr)
			*PlaceGuideWidget = params.PlaceGuideWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnJoinInterreputQuestDelegete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerInterruptQuestComponent*            InComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInFirst                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::OnJoinInterreputQuestDelegete(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnJoinInterreputQuestDelegete");
		
		ABP_BattleHUD_C_OnJoinInterreputQuestDelegete_Params params {};
		params.InComponent = InComponent;
		params.bInFirst = bInFirst;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.UnbindOnJoinInterruptQuest
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::UnbindOnJoinInterruptQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.UnbindOnJoinInterruptQuest");
		
		ABP_BattleHUD_C_UnbindOnJoinInterruptQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.BindOnJoinInterruptQuest
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::BindOnJoinInterruptQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.BindOnJoinInterruptQuest");
		
		ABP_BattleHUD_C_BindOnJoinInterruptQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.Unbind
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.Unbind");
		
		ABP_BattleHUD_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.Bind
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.Bind");
		
		ABP_BattleHUD_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteTelopManager
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteTelopManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteTelopManager");
		
		ABP_BattleHUD_C_DeleteTelopManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateTelopManager
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateTelopManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateTelopManager");
		
		ABP_BattleHUD_C_CreateTelopManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatUnreadNotify
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteChatUnreadNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatUnreadNotify");
		
		ABP_BattleHUD_C_DeleteChatUnreadNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateChatUnreadNotify
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateChatUnreadNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateChatUnreadNotify");
		
		ABP_BattleHUD_C_CreateChatUnreadNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteStatusAlimentNotifyWidgetOwner
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteStatusAlimentNotifyWidgetOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteStatusAlimentNotifyWidgetOwner");
		
		ABP_BattleHUD_C_DeleteStatusAlimentNotifyWidgetOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateStatusAlimentNotifyWidgetOwner
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateStatusAlimentNotifyWidgetOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateStatusAlimentNotifyWidgetOwner");
		
		ABP_BattleHUD_C_CreateStatusAlimentNotifyWidgetOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteOpenCommandMenu
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteOpenCommandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteOpenCommandMenu");
		
		ABP_BattleHUD_C_DeleteOpenCommandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateOpenCommandMenu
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateOpenCommandMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateOpenCommandMenu");
		
		ABP_BattleHUD_C_CreateOpenCommandMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteMailLimitIndicator
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteMailLimitIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteMailLimitIndicator");
		
		ABP_BattleHUD_C_DeleteMailLimitIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateMailLimitIndicator
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateMailLimitIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateMailLimitIndicator");
		
		ABP_BattleHUD_C_CreateMailLimitIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowSkit
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteTextWindowSkit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowSkit");
		
		ABP_BattleHUD_C_DeleteTextWindowSkit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowSkit
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateTextWindowSkit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowSkit");
		
		ABP_BattleHUD_C_CreateTextWindowSkit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindow
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteTextWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindow");
		
		ABP_BattleHUD_C_DeleteTextWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindow
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateTextWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindow");
		
		ABP_BattleHUD_C_CreateTextWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowDemo
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteTextWindowDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteTextWindowDemo");
		
		ABP_BattleHUD_C_DeleteTextWindowDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowDemo
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateTextWindowDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateTextWindowDemo");
		
		ABP_BattleHUD_C_CreateTextWindowDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifications
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifications");
		
		ABP_BattleHUD_C_DeleteNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifications
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifications");
		
		ABP_BattleHUD_C_CreateNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifyMessage
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteNotifyMessage");
		
		ABP_BattleHUD_C_DeleteNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifyMessage
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateNotifyMessage");
		
		ABP_BattleHUD_C_CreateNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteClassHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteClassHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteClassHUD");
		
		ABP_BattleHUD_C_DeleteClassHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateClassHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateClassHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateClassHUD");
		
		ABP_BattleHUD_C_CreateClassHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteShortPinHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteShortPinHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteShortPinHUD");
		
		ABP_BattleHUD_C_DeleteShortPinHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateShortPinHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateShortPinHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateShortPinHUD");
		
		ABP_BattleHUD_C_CreateShortPinHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteChatHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteChatHUD");
		
		ABP_BattleHUD_C_DeleteChatHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateChatHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateChatHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateChatHUD");
		
		ABP_BattleHUD_C_CreateChatHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteKeyGuideHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteKeyGuideHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteKeyGuideHUD");
		
		ABP_BattleHUD_C_DeleteKeyGuideHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateKeyGuideHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateKeyGuideHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateKeyGuideHUD");
		
		ABP_BattleHUD_C_CreateKeyGuideHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteLayoutHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteLayoutHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteLayoutHUD");
		
		ABP_BattleHUD_C_DeleteLayoutHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateLayoutHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateLayoutHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateLayoutHUD");
		
		ABP_BattleHUD_C_CreateLayoutHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.UpdateBattleInfoHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBInteractionInfo                          InteractionInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BattleHUD_C::UpdateBattleInfoHUD(const struct FSBInteractionInfo& InteractionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.UpdateBattleInfoHUD");
		
		ABP_BattleHUD_C_UpdateBattleInfoHUD_Params params {};
		params.InteractionInfo = InteractionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleInfoHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteBattleInfoHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleInfoHUD");
		
		ABP_BattleHUD_C_DeleteBattleInfoHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateBattleInfoHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateBattleInfoHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateBattleInfoHUD");
		
		ABP_BattleHUD_C_CreateBattleInfoHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteHUD");
		
		ABP_BattleHUD_C_DeleteHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateHUD");
		
		ABP_BattleHUD_C_CreateHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetTelopManager
	 * 		Flags  -> ()
	 */
	class USBTelopManager* ABP_BattleHUD_C::GetTelopManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetTelopManager");
		
		ABP_BattleHUD_C_GetTelopManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetBattleContentsHUD
	 * 		Flags  -> ()
	 */
	class USBBattleContentsHUD* ABP_BattleHUD_C::GetBattleContentsHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetBattleContentsHUD");
		
		ABP_BattleHUD_C_GetBattleContentsHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetNotifyMessage
	 * 		Flags  -> ()
	 */
	class UUserWidget* ABP_BattleHUD_C::GetNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetNotifyMessage");
		
		ABP_BattleHUD_C_GetNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetChatHUD
	 * 		Flags  -> ()
	 */
	class UUserWidget* ABP_BattleHUD_C::GetChatHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetChatHUD");
		
		ABP_BattleHUD_C_GetChatHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowDemo
	 * 		Flags  -> ()
	 */
	class USBTextWindowBase* ABP_BattleHUD_C::GetTextWindowDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowDemo");
		
		ABP_BattleHUD_C_GetTextWindowDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetLayoutableHUD
	 * 		Flags  -> ()
	 */
	class USBLayoutableHUD* ABP_BattleHUD_C::GetLayoutableHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetLayoutableHUD");
		
		ABP_BattleHUD_C_GetLayoutableHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.UnregistClassHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	bool ABP_BattleHUD_C::UnregistClassHud(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.UnregistClassHud");
		
		ABP_BattleHUD_C_UnregistClassHud_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowSkit
	 * 		Flags  -> ()
	 */
	class USBTextWindowBase* ABP_BattleHUD_C::GetTextWindowSkit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindowSkit");
		
		ABP_BattleHUD_C_GetTextWindowSkit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetRespawnHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class URespawnHUD_C*                               RespawnHUD                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::GetRespawnHUD(bool* bValid, class URespawnHUD_C** RespawnHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetRespawnHUD");
		
		ABP_BattleHUD_C_GetRespawnHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (RespawnHUD != nullptr)
			*RespawnHUD = params.RespawnHUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetOptionLayoutableHUD
	 * 		Flags  -> ()
	 */
	class UUserWidget* ABP_BattleHUD_C::GetOptionLayoutableHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetOptionLayoutableHUD");
		
		ABP_BattleHUD_C_GetOptionLayoutableHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetHitIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValid                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UHitIndicator_C*                             HitIndicator                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::GetHitIndicator(bool* bValid, class UHitIndicator_C** HitIndicator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetHitIndicator");
		
		ABP_BattleHUD_C_GetHitIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bValid != nullptr)
			*bValid = params.bValid;
		if (HitIndicator != nullptr)
			*HitIndicator = params.HitIndicator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetHitFlash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHitFlash_C*                                 refHitFlash                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::GetHitFlash(class UHitFlash_C** refHitFlash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetHitFlash");
		
		ABP_BattleHUD_C_GetHitFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (refHitFlash != nullptr)
			*refHitFlash = params.refHitFlash;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindow
	 * 		Flags  -> ()
	 */
	class USBTextWindow* ABP_BattleHUD_C::GetTextWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.GetTextWindow");
		
		ABP_BattleHUD_C_GetTextWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnQuestUpdateProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAcceptedQuestInfo                          PrevAcceptedQuestInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_BattleHUD_C::OnQuestUpdateProgress(const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnQuestUpdateProgress");
		
		ABP_BattleHUD_C_OnQuestUpdateProgress_Params params {};
		params.PrevAcceptedQuestInfo = PrevAcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.IsLayoutEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LayoutEditMode                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::IsLayoutEditMode(bool* LayoutEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.IsLayoutEditMode");
		
		ABP_BattleHUD_C_IsLayoutEditMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LayoutEditMode != nullptr)
			*LayoutEditMode = params.LayoutEditMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.SetLayoutEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EditModeEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::SetLayoutEditMode(bool EditModeEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.SetLayoutEditMode");
		
		ABP_BattleHUD_C_SetLayoutEditMode_Params params {};
		params.EditModeEnabled = EditModeEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DrawWireLocator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SizeY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::DrawWireLocator(int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DrawWireLocator");
		
		ABP_BattleHUD_C_DrawWireLocator_Params params {};
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_C39F708F49F4F4B3ADAF68B0B1BBE799
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnLoaded_C39F708F49F4F4B3ADAF68B0B1BBE799(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_C39F708F49F4F4B3ADAF68B0B1BBE799");
		
		ABP_BattleHUD_C_OnLoaded_C39F708F49F4F4B3ADAF68B0B1BBE799_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB");
		
		ABP_BattleHUD_C_OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8");
		
		ABP_BattleHUD_C_OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.InitTimerRespawnHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETimerHUDType                                      HUDType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::InitTimerRespawnHUD(ETimerHUDType HUDType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.InitTimerRespawnHUD");
		
		ABP_BattleHUD_C_InitTimerRespawnHUD_Params params {};
		params.HUDType = HUDType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.InitDhcBattleHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::InitDhcBattleHUD(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.InitDhcBattleHUD");
		
		ABP_BattleHUD_C_InitDhcBattleHUD_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddLevelUpClass(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpClass");
		
		ABP_BattleHUD_C_AddLevelUpClass_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SkillType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddLevelUpSkill(const class FString& SkillType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddLevelUpSkill");
		
		ABP_BattleHUD_C_AddLevelUpSkill_Params params {};
		params.SkillType = SkillType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankupCompleteMessage
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::AddAdventurerRankupCompleteMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankupCompleteMessage");
		
		ABP_BattleHUD_C_AddAdventurerRankupCompleteMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateEventMenu
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateEventMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateEventMenu");
		
		ABP_BattleHUD_C_CreateEventMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnCloseRmShopMenuEvent
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::OnCloseRmShopMenuEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnCloseRmShopMenuEvent");
		
		ABP_BattleHUD_C_OnCloseRmShopMenuEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CreateRmShop
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::CreateRmShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CreateRmShop");
		
		ABP_BattleHUD_C_CreateRmShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.BindRmShop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URmShopMenu_C*                               InRmShop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::BindRmShop(class URmShopMenu_C* InRmShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.BindRmShop");
		
		ABP_BattleHUD_C_BindRmShop_Params params {};
		params.InRmShop = InRmShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.UnbindRmShop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URmShopMenu_C*                               InRmShop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::UnbindRmShop(class URmShopMenu_C* InRmShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.UnbindRmShop");
		
		ABP_BattleHUD_C_UnbindRmShop_Params params {};
		params.InRmShop = InRmShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteRmShop
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteRmShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteRmShop");
		
		ABP_BattleHUD_C_DeleteRmShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.RequestDirectChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBPrivilegeType                                   PrivilegeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::RequestDirectChat(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.RequestDirectChat");
		
		ABP_BattleHUD_C_RequestDirectChat_Params params {};
		params.PlayerId = PlayerId;
		params.Name = Name;
		params.CharacterId = CharacterId;
		params.PrivilegeType = PrivilegeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.UpdateMouseCursorIcon
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::UpdateMouseCursorIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.UpdateMouseCursorIcon");
		
		ABP_BattleHUD_C_UpdateMouseCursorIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.KeyShortcut_Stamp
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::KeyShortcut_Stamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.KeyShortcut_Stamp");
		
		ABP_BattleHUD_C_KeyShortcut_Stamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnRequestTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCheckUnlock                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::OnRequestTutorialHelp(bool bCheckUnlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnRequestTutorialHelp");
		
		ABP_BattleHUD_C_OnRequestTutorialHelp_Params params {};
		params.bCheckUnlock = bCheckUnlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CallUpdateInteractionNotice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBInteractionInfo                          InteractionInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BattleHUD_C::CallUpdateInteractionNotice(const struct FSBInteractionInfo& InteractionInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CallUpdateInteractionNotice");
		
		ABP_BattleHUD_C_CallUpdateInteractionNotice_Params params {};
		params.InteractionInfo = InteractionInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShowChatHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShowChatHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShowChatHUD");
		
		ABP_BattleHUD_C_ShowChatHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ForceCloseChatHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ForceCloseChatHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ForceCloseChatHUD");
		
		ABP_BattleHUD_C_ForceCloseChatHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingClose
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingClose");
		
		ABP_BattleHUD_C_ShortcutRingClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingOpen
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingOpen");
		
		ABP_BattleHUD_C_ShortcutRingOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingSwitch
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingSwitch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingSwitch");
		
		ABP_BattleHUD_C_ShortcutRingSwitch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveRightRepeat
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ItemSelectorMoveRightRepeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveRightRepeat");
		
		ABP_BattleHUD_C_ItemSelectorMoveRightRepeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveRightPress
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ItemSelectorMoveRightPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveRightPress");
		
		ABP_BattleHUD_C_ItemSelectorMoveRightPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveLeftRepeat
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ItemSelectorMoveLeftRepeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveLeftRepeat");
		
		ABP_BattleHUD_C_ItemSelectorMoveLeftRepeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveLeftPress
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ItemSelectorMoveLeftPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorMoveLeftPress");
		
		ABP_BattleHUD_C_ItemSelectorMoveLeftPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorExe
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ItemSelectorExe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ItemSelectorExe");
		
		ABP_BattleHUD_C_ItemSelectorExe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.NextQuestInfo
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::NextQuestInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.NextQuestInfo");
		
		ABP_BattleHUD_C_NextQuestInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.Switching Map
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::SwitchingMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.Switching Map");
		
		ABP_BattleHUD_C_SwitchingMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.SetFocusActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::SetFocusActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.SetFocusActor");
		
		ABP_BattleHUD_C_SetFocusActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.HitIndicatorAddMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::HitIndicatorAddMarker(const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.HitIndicatorAddMarker");
		
		ABP_BattleHUD_C_HitIndicatorAddMarker_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OpenCursorModeToOtherPCMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerCharacter_C*                       InOtherPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OpenCursorModeToOtherPCMenu(class ABP_PlayerCharacter_C* InOtherPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OpenCursorModeToOtherPCMenu");
		
		ABP_BattleHUD_C_OpenCursorModeToOtherPCMenu_Params params {};
		params.InOtherPC = InOtherPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.CallAddMemberDeadNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MemberName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_BattleHUD_C::CallAddMemberDeadNotifyMessage(const class FText& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.CallAddMemberDeadNotifyMessage");
		
		ABP_BattleHUD_C_CallAddMemberDeadNotifyMessage_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnClickedCloseChatHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::OnClickedCloseChatHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnClickedCloseChatHUD");
		
		ABP_BattleHUD_C_OnClickedCloseChatHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuideUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EKeyGuideType                                      InKeyGuideType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::ChangeKeyGuideUpdate(EKeyGuideType InKeyGuideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuideUpdate");
		
		ABP_BattleHUD_C_ChangeKeyGuideUpdate_Params params {};
		params.InKeyGuideType = InKeyGuideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnSaveCharaConfigUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EKeyGuideType                                      InKeyGuideType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnSaveCharaConfigUpdate(EKeyGuideType InKeyGuideType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnSaveCharaConfigUpdate");
		
		ABP_BattleHUD_C_OnSaveCharaConfigUpdate_Params params {};
		params.InKeyGuideType = InKeyGuideType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnShowCombo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Combo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnShowCombo(int32_t Combo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnShowCombo");
		
		ABP_BattleHUD_C_OnShowCombo_Params params {};
		params.Combo = Combo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRespawnTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnShowRespawn(float InRespawnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawn");
		
		ABP_BattleHUD_C_OnShowRespawn_Params params {};
		params.InRespawnTime = InRespawnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnDisableRespawn
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::OnDisableRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnDisableRespawn");
		
		ABP_BattleHUD_C_OnDisableRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawnBattleArea
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::OnShowRespawnBattleArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnShowRespawnBattleArea");
		
		ABP_BattleHUD_C_OnShowRespawnBattleArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnUpdateRespawnGauge
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::OnUpdateRespawnGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnUpdateRespawnGauge");
		
		ABP_BattleHUD_C_OnUpdateRespawnGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEditMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::SetEditMode(bool bEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.SetEditMode");
		
		ABP_BattleHUD_C_SetEditMode_Params params {};
		params.bEditMode = bEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OpenInitSelect
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::OpenInitSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OpenInitSelect");
		
		ABP_BattleHUD_C_OpenInitSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuide1_2Visibility
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ChangeKeyGuide1_2Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ChangeKeyGuide1_2Visibility");
		
		ABP_BattleHUD_C_ChangeKeyGuide1_2Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.BattleAreaDisableMessage
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::BattleAreaDisableMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.BattleAreaDisableMessage");
		
		ABP_BattleHUD_C_BattleAreaDisableMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.SetBattleInfoHUDVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::SetBattleInfoHUDVisible(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.SetBattleInfoHUDVisible");
		
		ABP_BattleHUD_C_SetBattleInfoHUDVisible_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.SetKeyGuideTextVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               InSkillActionPosition                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::SetKeyGuideTextVisible(ESkillActionPosition InSkillActionPosition, bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.SetKeyGuideTextVisible");
		
		ABP_BattleHUD_C_SetKeyGuideTextVisible_Params params {};
		params.InSkillActionPosition = InSkillActionPosition;
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF5
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingExecuteF5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF5");
		
		ABP_BattleHUD_C_ShortcutRingExecuteF5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF6
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingExecuteF6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF6");
		
		ABP_BattleHUD_C_ShortcutRingExecuteF6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF7
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingExecuteF7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF7");
		
		ABP_BattleHUD_C_ShortcutRingExecuteF7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF8
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingExecuteF8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF8");
		
		ABP_BattleHUD_C_ShortcutRingExecuteF8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF9
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingExecuteF9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF9");
		
		ABP_BattleHUD_C_ShortcutRingExecuteF9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF10
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingExecuteF10()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF10");
		
		ABP_BattleHUD_C_ShortcutRingExecuteF10_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF11
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingExecuteF11()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF11");
		
		ABP_BattleHUD_C_ShortcutRingExecuteF11_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF12
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ShortcutRingExecuteF12()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShortcutRingExecuteF12");
		
		ABP_BattleHUD_C_ShortcutRingExecuteF12_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnWarehouseAbilityUpdateDelegate_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBWarehouseAbilityNotifyUIInfo>     UIInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BattleHUD_C::OnWarehouseAbilityUpdateDelegate__1(TArray<struct FSBWarehouseAbilityNotifyUIInfo> UIInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnWarehouseAbilityUpdateDelegate_イベント_1");
		
		ABP_BattleHUD_C_OnWarehouseAbilityUpdateDelegate__1_Params params {};
		params.UIInfo = UIInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.BindWarehouseAbility
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::BindWarehouseAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.BindWarehouseAbility");
		
		ABP_BattleHUD_C_BindWarehouseAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.UnbindWarehouseAbility
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::UnbindWarehouseAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.UnbindWarehouseAbility");
		
		ABP_BattleHUD_C_UnbindWarehouseAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ConstructDebugMenu
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ConstructDebugMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ConstructDebugMenu");
		
		ABP_BattleHUD_C_ConstructDebugMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DestructDebugMenu
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DestructDebugMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DestructDebugMenu");
		
		ABP_BattleHUD_C_DestructDebugMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnChangedDebugValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDebugMenuType                                   MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnChangedDebugValue(ESBDebugMenuType MenuType, const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnChangedDebugValue");
		
		ABP_BattleHUD_C_OnChangedDebugValue_Params params {};
		params.MenuType = MenuType;
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.TryShowQuestCompleteMessage_Delay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStepNo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DelaySeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::TryShowQuestCompleteMessage_Delay(int32_t InQuestIndex, int32_t InStepNo, float DelaySeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.TryShowQuestCompleteMessage_Delay");
		
		ABP_BattleHUD_C_TryShowQuestCompleteMessage_Delay_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.InStepNo = InStepNo;
		params.DelaySeconds = DelaySeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddAwakeInterruptQuestMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddAwakeInterruptQuestMessage(const class FName& InQuestId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddAwakeInterruptQuestMessage");
		
		ABP_BattleHUD_C_AddAwakeInterruptQuestMessage_Params params {};
		params.InQuestId = InQuestId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddAchievementGainedMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddAchievementGainedMessage(int32_t InAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddAchievementGainedMessage");
		
		ABP_BattleHUD_C_AddAchievementGainedMessage_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddTutorialHelpMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTutorialHelpId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddTutorialHelpMessage(const class FName& InTutorialHelpId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddTutorialHelpMessage");
		
		ABP_BattleHUD_C_AddTutorialHelpMessage_Params params {};
		params.InTutorialHelpId = InTutorialHelpId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankUpdateCompleteMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    Slot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddAdventurerRankUpdateCompleteMessage(ESBPlayerPassiveImagineSlotType Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddAdventurerRankUpdateCompleteMessage");
		
		ABP_BattleHUD_C_AddAdventurerRankUpdateCompleteMessage_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial_Core
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnGetMaterial_Core(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial_Core");
		
		ABP_BattleHUD_C_OnGetMaterial_Core_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddAutoDeliveryQuestCompleteMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSeasonPassQuestCycleType                        InCycle                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      QuestName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddAutoDeliveryQuestCompleteMessage(ESBSeasonPassQuestCycleType InCycle, const class FString& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddAutoDeliveryQuestCompleteMessage");
		
		ABP_BattleHUD_C_AddAutoDeliveryQuestCompleteMessage_Params params {};
		params.InCycle = InCycle;
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddWarehouseAbilityNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBWarehouseAbilityNotifyUIInfo>     InParam                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BattleHUD_C::AddWarehouseAbilityNotifyMessage(TArray<struct FSBWarehouseAbilityNotifyUIInfo> InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddWarehouseAbilityNotifyMessage");
		
		ABP_BattleHUD_C_AddWarehouseAbilityNotifyMessage_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddRecipeMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRecipeType                                      RecipeType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RecepiId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddRecipeMessage(ESBRecipeType RecipeType, int32_t RecepiId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddRecipeMessage");
		
		ABP_BattleHUD_C_AddRecipeMessage_Params params {};
		params.RecipeType = RecipeType;
		params.RecepiId = RecepiId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddNetworkCafeLoginTimeNotificationMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NetworkCafeTotalTimePlayedToday                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLoginTimeOnly                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::AddNetworkCafeLoginTimeNotificationMessage(int32_t NetworkCafeTotalTimePlayedToday, bool bIsLoginTimeOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddNetworkCafeLoginTimeNotificationMessage");
		
		ABP_BattleHUD_C_AddNetworkCafeLoginTimeNotificationMessage_Params params {};
		params.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;
		params.bIsLoginTimeOnly = bIsLoginTimeOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddLoginBonusNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BattleHUD_C::AddLoginBonusNotifyMessage(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddLoginBonusNotifyMessage");
		
		ABP_BattleHUD_C_AddLoginBonusNotifyMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddMemberDeadNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MemberName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_BattleHUD_C::AddMemberDeadNotifyMessage(const class FText& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddMemberDeadNotifyMessage");
		
		ABP_BattleHUD_C_AddMemberDeadNotifyMessage_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddMailAcceptLimitNotifyMessage
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::AddMailAcceptLimitNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddMailAcceptLimitNotifyMessage");
		
		ABP_BattleHUD_C_AddMailAcceptLimitNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddRankingRewardNotifyMessage
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::AddRankingRewardNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddRankingRewardNotifyMessage");
		
		ABP_BattleHUD_C_AddRankingRewardNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddLine1NotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BattleHUD_C::AddLine1NotifyMessage(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddLine1NotifyMessage");
		
		ABP_BattleHUD_C_AddLine1NotifyMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddLine1LNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BattleHUD_C::AddLine1LNotifyMessage(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddLine1LNotifyMessage");
		
		ABP_BattleHUD_C_AddLine1LNotifyMessage_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddLine2NotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMainMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        InSubMessage                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BattleHUD_C::AddLine2NotifyMessage(const class FText& InMainMessage, const class FText& InSubMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddLine2NotifyMessage");
		
		ABP_BattleHUD_C_AddLine2NotifyMessage_Params params {};
		params.InMainMessage = InMainMessage;
		params.InSubMessage = InSubMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.AddItemExpiryNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::AddItemExpiryNotifyMessage(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.AddItemExpiryNotifyMessage");
		
		ABP_BattleHUD_C_AddItemExpiryNotifyMessage_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ReceiveBeginPlay");
		
		ABP_BattleHUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDrawHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SizeY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDrawHUD");
		
		ABP_BattleHUD_C_ReceiveDrawHUD_Params params {};
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ReceiveDestroyed");
		
		ABP_BattleHUD_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.BindBalloonWidget
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::BindBalloonWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.BindBalloonWidget");
		
		ABP_BattleHUD_C_BindBalloonWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnReceivedMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBChatMessage*                              Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBChatUIMessage                            Mess                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ABP_BattleHUD_C::OnReceivedMessage(class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnReceivedMessage");
		
		ABP_BattleHUD_C_OnReceivedMessage_Params params {};
		params.Message = Message;
		params.Mess = Mess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.UnbindBalloonWIdget
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::UnbindBalloonWIdget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.UnbindBalloonWIdget");
		
		ABP_BattleHUD_C_UnbindBalloonWIdget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnReceiveUpdateQuestProgressEvent2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnReceiveUpdateQuestProgressEvent2(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnReceiveUpdateQuestProgressEvent2");
		
		ABP_BattleHUD_C_OnReceiveUpdateQuestProgressEvent2_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::OnGetMaterial(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnGetMaterial");
		
		ABP_BattleHUD_C_OnGetMaterial_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.RegistClassHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::RegistClassHud(class UUserWidget* Widget, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.RegistClassHud");
		
		ABP_BattleHUD_C_RegistClassHud_Params params {};
		params.Widget = Widget;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnGameSettingAfter
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::OnGameSettingAfter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnGameSettingAfter");
		
		ABP_BattleHUD_C_OnGameSettingAfter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ShowSimpleAlertByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TextId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::ShowSimpleAlertByID(const class FName& TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ShowSimpleAlertByID");
		
		ABP_BattleHUD_C_ShowSimpleAlertByID_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BattleHUD_C::OnVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnVisibleSetting");
		
		ABP_BattleHUD_C_OnVisibleSetting_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.BindVisibleSetting
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::BindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.BindVisibleSetting");
		
		ABP_BattleHUD_C_BindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.UnbindVisibleSetting
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::UnbindVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.UnbindVisibleSetting");
		
		ABP_BattleHUD_C_UnbindVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleContentsHUD
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::DeleteBattleContentsHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.DeleteBattleContentsHUD");
		
		ABP_BattleHUD_C_DeleteBattleContentsHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.ExecuteUbergraph_BP_BattleHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BattleHUD_C::ExecuteUbergraph_BP_BattleHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.ExecuteUbergraph_BP_BattleHUD");
		
		ABP_BattleHUD_C_ExecuteUbergraph_BP_BattleHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BattleHUD.BP_BattleHUD_C.OnCloseRmShop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_BattleHUD_C::OnCloseRmShop__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BattleHUD.BP_BattleHUD_C.OnCloseRmShop__DelegateSignature");
		
		ABP_BattleHUD_C_OnCloseRmShop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BattleHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BattleHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleHUD.BP_BattleHUD_C");
		return ptr;
	}

}


