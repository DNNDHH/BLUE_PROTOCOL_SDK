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
	 * WidgetBlueprintGeneratedClass UMG_MatchingMenu.UMG_MatchingMenu_C
	 * Size -> 0x0071 (FullSize[0x0321] - InheritedSize[0x02B0])
	 */
	class UUMG_MatchingMenu_C : public USBMatchingMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnmOut;                                                  // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnmIn;                                                   // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UContentsJingle_C*                                   ContentsJingle;                                          // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_Main_C*                            MainWindow;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_MatchingMenu_AfterApplying_C*                   UMG_MatchingMenu_AfterApplying;                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bFromMainMenu;                                           // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_N35E[0x3];                                   // 0x02F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                InitDungeonId;                                           // 0x02FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_35FB[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMatchingStart_Success;                                 // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUMG_ProductDetailMenu_C*                            ProductDetailMenu;                                       // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ResetIsDone;                                             // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnClickSupplyIcon(const struct FSBDungeonSupply& DungeonSupply);
		class UWidget* GetCurrentWidget();
		void SetWindowState();
		void Construct();
		void BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature(TArray<struct FSBMapInfo>* DungeonMapInfoArray, bool bUnlimit);
		void Destruct();
		void ResetWindowState();
		void OnMatchedGame_Event(class USBMatchingGameState* MatchedGame);
		void OnMatchedGameCloseWindow_Event();
		void OnUICancel_Event();
		void BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature();
		void BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature();
		void WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1();
		void BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
		void BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
		void ForceExitMenu();
		void ExecuteUbergraph_UMG_MatchingMenu(int32_t EntryPoint);
		void OnMatchingStart_Success__DelegateSignature();
		void OnClose__DelegateSignature(class UUMG_MatchingMenu_C* Sender);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
