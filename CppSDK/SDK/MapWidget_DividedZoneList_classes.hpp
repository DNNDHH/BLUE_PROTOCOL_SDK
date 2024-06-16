#pragma once

 

// Package: MapWidget_DividedZoneList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_DividedZoneList.MapWidget_DividedZoneList_C
// 0x00A0 (0x0318 - 0x0278)
class UMapWidget_DividedZoneList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BtnBg;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapSymbolIcon;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMapName;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                      UniformGridPanelForZoneListItem;                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 MapId;                                             // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              MapSymbolIconTexture;                              // 0x02B8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         VisitedZoneIds;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ListItemNumMax;                                    // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopIndex;                                         // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ColumnNumMax;                                      // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FED[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnListItemClicked;                                 // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMapWidget_DividedZoneListItem_C*       SelectedItem;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnListItemClicked__DelegateSignature(const class FString& InDividedZoneId);
	void ExecuteUbergraph_MapWidget_DividedZoneList(int32 EntryPoint);
	void OnListItemClickedEvent(class UMapWidget_DividedZoneListItem_C* InSelf, const class FString& InDividedZoneId);
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void Setup(const class FString& InMapId, TArray<class FString>& InVisitedZoneIds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_DividedZoneList_C">();
	}
	static class UMapWidget_DividedZoneList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_DividedZoneList_C>();
	}
};
static_assert(alignof(UMapWidget_DividedZoneList_C) == 0x000008, "Wrong alignment on UMapWidget_DividedZoneList_C");
static_assert(sizeof(UMapWidget_DividedZoneList_C) == 0x000318, "Wrong size on UMapWidget_DividedZoneList_C");
static_assert(offsetof(UMapWidget_DividedZoneList_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_DividedZoneList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, BtnBg) == 0x000280, "Member 'UMapWidget_DividedZoneList_C::BtnBg' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, LineImage) == 0x000288, "Member 'UMapWidget_DividedZoneList_C::LineImage' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, MapSymbolIcon) == 0x000290, "Member 'UMapWidget_DividedZoneList_C::MapSymbolIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, TxtMapName) == 0x000298, "Member 'UMapWidget_DividedZoneList_C::TxtMapName' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, UniformGridPanelForZoneListItem) == 0x0002A0, "Member 'UMapWidget_DividedZoneList_C::UniformGridPanelForZoneListItem' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, MapId) == 0x0002A8, "Member 'UMapWidget_DividedZoneList_C::MapId' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, MapSymbolIconTexture) == 0x0002B8, "Member 'UMapWidget_DividedZoneList_C::MapSymbolIconTexture' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, VisitedZoneIds) == 0x0002E0, "Member 'UMapWidget_DividedZoneList_C::VisitedZoneIds' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, ListItemNumMax) == 0x0002F0, "Member 'UMapWidget_DividedZoneList_C::ListItemNumMax' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, LoopIndex) == 0x0002F4, "Member 'UMapWidget_DividedZoneList_C::LoopIndex' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, ColumnNumMax) == 0x0002F8, "Member 'UMapWidget_DividedZoneList_C::ColumnNumMax' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, OnListItemClicked) == 0x000300, "Member 'UMapWidget_DividedZoneList_C::OnListItemClicked' has a wrong offset!");
static_assert(offsetof(UMapWidget_DividedZoneList_C, SelectedItem) == 0x000310, "Member 'UMapWidget_DividedZoneList_C::SelectedItem' has a wrong offset!");

}

