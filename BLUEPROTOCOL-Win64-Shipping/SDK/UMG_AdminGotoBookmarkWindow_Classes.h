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
	 * WidgetBlueprintGeneratedClass UMG_AdminGotoBookmarkWindow.UMG_AdminGotoBookmarkWindow_C
	 * Size -> 0x0071 (FullSize[0x02E9] - InheritedSize[0x0278])
	 */
	class UUMG_AdminGotoBookmarkWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Delete;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Down;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Edit;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Move;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Register;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Up;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           ListView_2;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            ListViewSizeBox;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_AdminWindowTemplate_C*                          UMG_AdminWindowTemplate;                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class USBAdminGotoBookmarkItem*>                    BookmarkList;                                            // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UUMG_AdminGotoBookmarkRegistrationWindow_C*          RegistrationWindow;                                      // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBAdminGotoBookmarkItem*                            SelectedData;                                            // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsIdWarp;                                               // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Construct();
		void BndEvt__Button_Register_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void AddItem(class USBAdminGotoBookmarkItem* NewData);
		void Destruct();
		void Reset();
		void BndEvt__ListView_1_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* item, bool bIsSelected);
		void BndEvt__Button_Move_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void SetSelectedData(class UObject* SelectedData);
		void CreateRegistrationWindow(class USBAdminGotoBookmarkItem* EditingData);
		void BndEvt__Button_Edit_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void CloseRegistrationWindow();
		void BndEvt__Button_Delete_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void OnConfirmDelete(EYesNoDialogResult Result);
		void BndEvt__Button_Up_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Down_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void Show();
		void Hide();
		void BndEvt__ListView_1_K2Node_ComponentBoundEvent_8_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
		void BndEvt__ListView_1_K2Node_ComponentBoundEvent_9_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget);
		void OnClickedItemMoveButton(class USBAdminGotoBookmarkItem* Data);
		void ExecuteUbergraph_UMG_AdminGotoBookmarkWindow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
