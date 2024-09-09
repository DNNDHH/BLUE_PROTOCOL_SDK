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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass PlayerProfileLikeBtn.PlayerProfileLikeBtn_C
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UPlayerProfileLikeBtn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         BtnLike;                                                 // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Offline;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_61;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             BtnEventComplete;                                        // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetButtonType(ESendLikeError Selection);
		void SetButtonEnable(bool bInIsEnabled);
		bool SetData(bool IsSendLIke, int32_t OnlineStatus, bool PSOnlyDiff);
		void BndEvt__BtnLike_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void SendLike(TArray<struct FLikeSend> SendLikeList);
		void OnSendLikeEvent(bool bWasSuccessful, int32_t RetCode, int32_t Warning);
		void SetButtonErrorType(int32_t InWarning, bool InIsSystemMessage);
		void ExecuteUbergraph_PlayerProfileLikeBtn(int32_t EntryPoint);
		void BtnEventComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
