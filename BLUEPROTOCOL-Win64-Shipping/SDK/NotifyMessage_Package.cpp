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
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnQuestJingleCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::OnQuestJingleCancel(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnQuestJingleCancel");
		
		UNotifyMessage_C_OnQuestJingleCancel_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnQuestJingleComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::OnQuestJingleComplete(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnQuestJingleComplete");
		
		UNotifyMessage_C_OnQuestJingleComplete_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNotifyMessage_C::OnQuestJingleUpdate2(TArray<int32_t> InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate2");
		
		UNotifyMessage_C_OnQuestJingleUpdate2_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::OnQuestJingleUpdate(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnQuestJingleUpdate");
		
		UNotifyMessage_C_OnQuestJingleUpdate_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnQuestJingleAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::OnQuestJingleAccepted(class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnQuestJingleAccepted");
		
		UNotifyMessage_C_OnQuestJingleAccepted_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.TermQuestJingle
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::TermQuestJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.TermQuestJingle");
		
		UNotifyMessage_C_TermQuestJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.InitQuestJingle
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::InitQuestJingle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.InitQuestJingle");
		
		UNotifyMessage_C_InitQuestJingle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.BindQuestJingleAccept
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::BindQuestJingleAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.BindQuestJingleAccept");
		
		UNotifyMessage_C_BindQuestJingleAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.BindQuestJingleUpdate
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::BindQuestJingleUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.BindQuestJingleUpdate");
		
		UNotifyMessage_C_BindQuestJingleUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.BindQuestJingleClear
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::BindQuestJingleClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.BindQuestJingleClear");
		
		UNotifyMessage_C_BindQuestJingleClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.BindQuestJingleCancel
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::BindQuestJingleCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.BindQuestJingleCancel");
		
		UNotifyMessage_C_BindQuestJingleCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnReceiveAcceptedQuestEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::OnReceiveAcceptedQuestEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnReceiveAcceptedQuestEvent");
		
		UNotifyMessage_C_OnReceiveAcceptedQuestEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnReceiveUpdateQuestProgressEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::OnReceiveUpdateQuestProgressEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnReceiveUpdateQuestProgressEvent");
		
		UNotifyMessage_C_OnReceiveUpdateQuestProgressEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnReceiveCompleteQuestEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::OnReceiveCompleteQuestEvent(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnReceiveCompleteQuestEvent");
		
		UNotifyMessage_C_OnReceiveCompleteQuestEvent_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnReceiveCancelQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::OnReceiveCancelQuest(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnReceiveCancelQuest");
		
		UNotifyMessage_C_OnReceiveCancelQuest_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.BindQuestJingleUpdate2
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::BindQuestJingleUpdate2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.BindQuestJingleUpdate2");
		
		UNotifyMessage_C_BindQuestJingleUpdate2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleUpdate2
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::UnbindQuestJingleUpdate2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleUpdate2");
		
		UNotifyMessage_C_UnbindQuestJingleUpdate2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.OnUpdatedQuestsJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    QuestIndexes                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UNotifyMessage_C::OnUpdatedQuestsJoin(TArray<int32_t> QuestIndexes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.OnUpdatedQuestsJoin");
		
		UNotifyMessage_C_OnUpdatedQuestsJoin_Params params {};
		params.QuestIndexes = QuestIndexes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleAccept
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::UnbindQuestJingleAccept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleAccept");
		
		UNotifyMessage_C_UnbindQuestJingleAccept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleClear
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::UnbindQuestJingleClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleClear");
		
		UNotifyMessage_C_UnbindQuestJingleClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleUpdate
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::UnbindQuestJingleUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleUpdate");
		
		UNotifyMessage_C_UnbindQuestJingleUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleCancel
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::UnbindQuestJingleCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.UnbindQuestJingleCancel");
		
		UNotifyMessage_C_UnbindQuestJingleCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.Construct
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.Construct");
		
		UNotifyMessage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddQuestAccepted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddQuestAccepted(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddQuestAccepted");
		
		UNotifyMessage_C_AddQuestAccepted_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddNotifyMessageItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsNeedSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNotifyMessage_C::AddNotifyMessageItem(class UUserWidget* Widget, class UAkAudioEvent* Sound, bool bIsNeedSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddNotifyMessageItem");
		
		UNotifyMessage_C_AddNotifyMessageItem_Params params {};
		params.Widget = Widget;
		params.Sound = Sound;
		params.bIsNeedSound = bIsNeedSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddQuestCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddQuestCompleted(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddQuestCompleted");
		
		UNotifyMessage_C_AddQuestCompleted_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.Tick");
		
		UNotifyMessage_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddQuestUpdateProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAcceptedQuestInfo                          PrevAcceptedQuestInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FAcceptedQuestInfo                          AfterAcceptedQuestInfo                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessage_C::AddQuestUpdateProgress(const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo, const struct FAcceptedQuestInfo& AfterAcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddQuestUpdateProgress");
		
		UNotifyMessage_C_AddQuestUpdateProgress_Params params {};
		params.PrevAcceptedQuestInfo = PrevAcceptedQuestInfo;
		params.AfterAcceptedQuestInfo = AfterAcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddInterruptQuestAwake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddInterruptQuestAwake(const class FName& QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddInterruptQuestAwake");
		
		UNotifyMessage_C_AddInterruptQuestAwake_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddAchievementGained
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddAchievementGained(int32_t InAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddAchievementGained");
		
		UNotifyMessage_C_AddAchievementGained_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTutorialHelp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddTutorialHelp(const class FName& InTutorialHelp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddTutorialHelp");
		
		UNotifyMessage_C_AddTutorialHelp_Params params {};
		params.InTutorialHelp = InTutorialHelp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddAdventurerRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPlayerPassiveImagineSlotType                    Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddAdventurerRank(ESBPlayerPassiveImagineSlotType Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddAdventurerRank");
		
		UNotifyMessage_C_AddAdventurerRank_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddQuestSynopsis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddQuestSynopsis(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddQuestSynopsis");
		
		UNotifyMessage_C_AddQuestSynopsis_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddQuestUpdateSimple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddQuestUpdateSimple(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddQuestUpdateSimple");
		
		UNotifyMessage_C_AddQuestUpdateSimple_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddWishlist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBWishListType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddWishlist(const class FText& Name, ESBWishListType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddWishlist");
		
		UNotifyMessage_C_AddWishlist_Params params {};
		params.Name = Name;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddAutoDeliveryQuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InQuestName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBSeasonPassQuestCycleType                        InCycleType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddAutoDeliveryQuestComplete(const class FString& InQuestName, ESBSeasonPassQuestCycleType InCycleType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddAutoDeliveryQuestComplete");
		
		UNotifyMessage_C_AddAutoDeliveryQuestComplete_Params params {};
		params.InQuestName = InQuestName;
		params.InCycleType = InCycleType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddWarehouseAbilityUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        AbilityName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBWarehouseAbilityCharacterStatus                 Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddWarehouseAbilityUpdated(const class FText& AbilityName, ESBWarehouseAbilityCharacterStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddWarehouseAbilityUpdated");
		
		UNotifyMessage_C_AddWarehouseAbilityUpdated_Params params {};
		params.AbilityName = AbilityName;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddRecipeUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRecipeType                                      RecipeType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddRecipeUpdated(ESBRecipeType RecipeType, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddRecipeUpdated");
		
		UNotifyMessage_C_AddRecipeUpdated_Params params {};
		params.RecipeType = RecipeType;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddNetworkCafePlayTimeNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NetworkCafeTotalTimePlayedToday                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddNetworkCafePlayTimeNotification(int32_t NetworkCafeTotalTimePlayedToday)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddNetworkCafePlayTimeNotification");
		
		UNotifyMessage_C_AddNetworkCafePlayTimeNotification_Params params {};
		params.NetworkCafeTotalTimePlayedToday = NetworkCafeTotalTimePlayedToday;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddLoginBonusNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessage_C::AddLoginBonusNotifyMessage(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddLoginBonusNotifyMessage");
		
		UNotifyMessage_C_AddLoginBonusNotifyMessage_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddNetworkCafeRewardNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBNetworkCafeReward                        InNetwordCafeReward                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UNotifyMessage_C::AddNetworkCafeRewardNotification(const struct FSBNetworkCafeReward& InNetwordCafeReward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddNetworkCafeRewardNotification");
		
		UNotifyMessage_C_AddNetworkCafeRewardNotification_Params params {};
		params.InNetwordCafeReward = InNetwordCafeReward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddMemberDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MemberName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessage_C::AddMemberDead(const class FText& MemberName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddMemberDead");
		
		UNotifyMessage_C_AddMemberDead_Params params {};
		params.MemberName = MemberName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.Destruct
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.Destruct");
		
		UNotifyMessage_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddMailAcceptLimitNotification
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::AddMailAcceptLimitNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddMailAcceptLimitNotification");
		
		UNotifyMessage_C_AddMailAcceptLimitNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddRankingRewardNotifyMessage
	 * 		Flags  -> ()
	 */
	void UNotifyMessage_C::AddRankingRewardNotifyMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddRankingRewardNotifyMessage");
		
		UNotifyMessage_C_AddRankingRewardNotifyMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddLine1NotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessage_C::AddLine1NotifyMessage(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddLine1NotifyMessage");
		
		UNotifyMessage_C_AddLine1NotifyMessage_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddLine1LNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessage_C::AddLine1LNotifyMessage(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddLine1LNotifyMessage");
		
		UNotifyMessage_C_AddLine1LNotifyMessage_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddLine2NotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InTextMain                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InTextSub                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNotifyMessage_C::AddLine2NotifyMessage(const class FText& InTextMain, const class FText& InTextSub)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddLine2NotifyMessage");
		
		UNotifyMessage_C_AddLine2NotifyMessage_Params params {};
		params.InTextMain = InTextMain;
		params.InTextSub = InTextSub;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.AddItemExpiryNotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::AddItemExpiryNotifyMessage(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.AddItemExpiryNotifyMessage");
		
		UNotifyMessage_C_AddItemExpiryNotifyMessage_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NotifyMessage.NotifyMessage_C.ExecuteUbergraph_NotifyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNotifyMessage_C::ExecuteUbergraph_NotifyMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotifyMessage.NotifyMessage_C.ExecuteUbergraph_NotifyMessage");
		
		UNotifyMessage_C_ExecuteUbergraph_NotifyMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotifyMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotifyMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotifyMessage.NotifyMessage_C");
		return ptr;
	}

}


