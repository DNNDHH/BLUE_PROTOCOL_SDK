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
	 * WidgetBlueprintGeneratedClass Fang_expedition_MapWindow.Fang_expedition_MapWindow_C
	 * Size -> 0x0098 (FullSize[0x0310] - InheritedSize[0x0278])
	 */
	class UFang_expedition_MapWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BG;                                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DebugButton1;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_MapIcon_C*                          DummyIcon;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_FieldMap_C*                         Fang_expedition_FieldMap;                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        IconPanel;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 MapNameText;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Name_Base;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UFang_expedition_MapIcon_C*>                  MapIconList;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnMapIconClick;                                          // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       GridLineView;                                            // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BTGS[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMapIconGroupClick;                                     // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBFang_expeditionIconData>                  TempIconDataList;                                        // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UFang_expeditionAreaIconTooltip_C*>           TooltipList;                                             // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UpdateMapIconNewMark(const class FString& InId);
		void OnPaint(struct FPaintContext* Context);
		void SetCloudPosition(const class FString& TraverseName, class UCanvasPanelSlot* CanvasSlot);
		void SetIconPositionData(class UCanvasPanelSlot* CanvasSlot, const struct FVector2D& Position);
		void ClearIcon();
		void SetExpeditionData(const class FString& Field, struct FSBFang_expeditionData* ExpeditionData);
		void SetMapId(const class FString& MapId);
		void Construct();
		void IconClickWork(const class FString& ID);
		void Destruct();
		void BndEvt__Fang_expedition_MapWindow_DebugButton1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void IconGroupClick(int32_t Index);
		void ExecuteUbergraph_Fang_expedition_MapWindow(int32_t EntryPoint);
		void OnMapIconGroupClick__DelegateSignature(const struct FSBFang_expeditionIconData& IconData);
		void OnMapIconClick__DelegateSignature(const class FString& ID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
