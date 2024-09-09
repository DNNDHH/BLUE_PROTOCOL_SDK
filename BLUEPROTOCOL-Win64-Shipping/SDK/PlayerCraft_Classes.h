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
	 * WidgetBlueprintGeneratedClass PlayerCraft.PlayerCraft_C
	 * Size -> 0x01A9 (FullSize[0x0421] - InheritedSize[0x0278])
	 */
	class UPlayerCraft_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn_ShowHint;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCraftJIngle_C*                                      CraftJIngle;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCraftList_C*                                        CraftList;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCraftResultItem_C*                                  CraftResultItem;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCraftResultWeaponMulti_C*                           CraftResultWeaponMulti;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCraftResultWeaponSingle_C*                          CraftResultWeaponSingle;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_LackAdvRank;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_TimeOut;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageWhiteBG;                                            // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             LoadBlocker;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Results;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShopMenu_Craft_InAnime_C*                           ShopMenu_Craft_InAnime;                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsCrafted;                                              // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WP5K[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CraftedItemUID;                                          // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCloseAll;                                              // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FString>                                      MultiCraft;                                              // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MultiCriticalNum;                                        // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMultiCompl;                                            // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9CSH[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCraftMasterData                                    CraftMaster;                                             // 0x0348(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       LockInput;                                               // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5FVN[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CraftedTotalAmount;                                      // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsShowWeapon;                                            // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsCriticalCraft;                                         // 0x03D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P9MD[0x6];                                   // 0x03DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               MultiCriticals;                                          // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsFailActive;                                           // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W92W[0x3];                                   // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SaleAmount;                                              // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SaleProfits;                                             // 0x03F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RHZ6[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnError;                                                 // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCancelExecuteCraft;                                    // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bExecutingCraft;                                         // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetMultiCompleteValues(TArray<class FString>* MultiCraft, int32_t MultiCriticalNum, int32_t CraftedTotalAmount, TArray<bool>* MultiCriticals, bool bIsFailActive, int32_t SaleAmount, int32_t SaleProfits);
		void SetCompleteValues(const class FString& CraftedItemUID, bool IsCriticalCraft, int32_t CraftedTotalAmount, int32_t SaleAmount, int32_t SaleProfits);
		void GetCraftComponent(class USBPlayerCraftComponent** CraftComponent);
		void SetIsLockInput(bool bLockInput);
		void UpdateTimeoutVisible();
		void Destruct();
		void EventOnCloseCraftResult(EDialogResult Result);
		void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void EventOnCompleteMultiCraft(int32_t ErrorCode, bool IsCritical, TArray<class FString> ItemUniqueids, int32_t CriticalNum, bool isFail, int32_t TotalAmount, TArray<bool> Criticals, int32_t SaleAmount, int32_t SaleProfits);
		void EventOnChangeMoneyColor(bool WhiteColor);
		void EventOnErrorAdventureBoard(EDialogResult Result);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void EventOnJingleAnimFinished();
		void EventOnCompleteCfaft(int32_t ErrorCode, bool IsSuccess, bool IsCritical, const class FString& ItemUniqueId, int32_t TotalAmount, int32_t SaleAmount, int32_t SaleProfits);
		void EventOnErrorCraft(int32_t ErrorCode);
		void EventOnPressUICancel();
		void EventExecuteCraft();
		void EventOnCancelExecuteCraft();
		void EventOnSelectRecepi(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem);
		void EventOnCompleteCraftRequestCommon();
		void EventOnBeginCraft();
		void EventOnEndCraft();
		void EventOnCloseFromCraftList();
		void EventOnCompleteRedayCheckDialog(EDialogResult Result);
		void EventOnCloseClassCheck(EDialogResult Result);
		void EvemtOnCloseNotEnoughMoney(EDialogResult Result);
		void EventOnTokenDemanded(EDialogResult Result);
		void EventOnCloseOverflowDialog(EDialogResult Result);
		void EventOnOverflowAccepted(EDialogResult Result);
		void EventOnCloseConditionCreated(EDialogResult Result);
		void ExecuteUbergraph_PlayerCraft(int32_t EntryPoint);
		void OnCancelExecuteCraft__DelegateSignature();
		void OnError__DelegateSignature(int32_t ErrorCode);
		void OnCloseAll__DelegateSignature(bool IsCrafted);
		void OnClose__DelegateSignature(bool IsCrafted);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
