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
	 * WidgetBlueprintGeneratedClass Fang_expedition_AreaListItem.Fang_expedition_AreaListItem_C
	 * Size -> 0x0BC8 (FullSize[0x0E40] - InheritedSize[0x0278])
	 */
	class UFang_expedition_AreaListItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anm_BGFld_On;                                            // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          AreaName;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     BGSwitch;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasArea;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             IconPadding;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              NewIcon;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SelectButton;                                            // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_StatusIcon_C*                       StatusIcon1;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_StatusIcon_C*                       StatusIcon2;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_StatusIcon_C*                       StatusIcon3;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_StatusIcon_C*                       StatusIcon4;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_StatusIcon_C*                       StatusIcon5;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      StatusIconBox1;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TimeIcon;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         TownSelectButton;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnItemSelected;                                          // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    ItemIndex;                                               // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BgType;                                                  // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInit;                                                  // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1NT7[0x7];                                   // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         TownTextColor;                                           // 0x0318(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         FieldTextColor;                                          // 0x0340(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBFang_expeditionAreaData                          TempAreaData;                                            // 0x0368(0x00A8) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              TempFieldId;                                             // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FButtonStyle                                        TownBtn_Normal;                                          // 0x0420(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        TownBtn_Selected;                                        // 0x0698(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        FieldBtn_Normal;                                         // 0x0910(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        FieldBtn_Selected;                                       // 0x0B88(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         FieldTextColor_Selected;                                 // 0x0E00(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       BtnSelcted;                                              // 0x0E28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GVRP[0x7];                                   // 0x0E29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExpId;                                                   // 0x0E30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void ShowNewMark(bool InParam);
		void ClearNewMark();
		void CheckNewMark(const class FString& InParam, bool* OutParam);
		void SetBtnSelected(bool BtnSelected);
		void SetFieldData(int32_t Index, const class FString& Field);
		void GetData(struct FSBFang_expeditionAreaData* AreaData);
		void ResetPlayIcon();
		void CheckPlayData(TArray<struct FSBFang_expeditionPlayData>* PlayDataList, bool IsField);
		void SetData(int32_t Index, const struct FSBFang_expeditionAreaData& Data, int32_t BgOverwrite, int32_t CategoryOverwrite);
		void BGTypeSet(int32_t Type);
		void BndEvt__Fang_expedition_AreaListItem_TownSelectButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MountExpedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Fang_expedition_AreaListItem_SelectButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_Fang_expedition_AreaListItem(int32_t EntryPoint);
		void OnItemSelected__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
