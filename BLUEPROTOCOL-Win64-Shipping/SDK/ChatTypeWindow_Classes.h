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
	 * WidgetBlueprintGeneratedClass ChatTypeWindow.ChatTypeWindow_C
	 * Size -> 0x0075 (FullSize[0x02ED] - InheritedSize[0x0278])
	 */
	class UChatTypeWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Bg1;                                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               Button_Hit;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatWindowTypeItem_C*                               ChatWindowTypeItem1;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatWindowTypeItem_C*                               ChatWindowTypeItem2;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatWindowTypeItem_C*                               ChatWindowTypeItem3;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatWindowTypeItem_C*                               ChatWindowTypeItem4;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TypeListGrp;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Direct;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EventTypeSelected;                                       // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bVisible;                                                // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTalkModeRestrictive;                                    // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D9RP[0x2];                                   // 0x02E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Position;                                                // 0x02E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		E_ChatWindowChatType                                       CurrentChatWindowType;                                   // 0x02EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void InitDirectChatItem();
		void IsEndAnimOut(bool* IsEnd);
		void CalcPosition(struct FVector2D* Position);
		void EndChat();
		void HideWindow();
		void ShowWindow();
		void Construct();
		void BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
		void BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
		void BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
		void BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
		void OnAnimationFinished__1();
		void OnClickedDirectChatItem(class UChatWindowTypeItem_C* TypeItem);
		void OnPressCancel();
		void BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void ExecuteUbergraph_ChatTypeWindow(int32_t EntryPoint);
		void EventTypeSelected__DelegateSignature(ESBChatLogType SelectedType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
