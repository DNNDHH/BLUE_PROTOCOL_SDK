#pragma once

 

// Package: MapWidget_PinIconList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_PinIconList.MapWidget_PinIconList_C
// 0x0038 (0x02B0 - 0x0278)
class UMapWidget_PinIconList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPinIconSelected;                                 // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PinCnt;                                            // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8053[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        HorizontalBoxChildsForDelete;                      // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnPinIconSelected__DelegateSignature(EMapPinType InSelectedPinType);
	void ExecuteUbergraph_MapWidget_PinIconList(int32 EntryPoint);
	void EraserIconPressed();
	void OnPinEraserIconBtnPressed(class UMapWidget_PinEraserIconBtn_C* InPressedIcon);
	void OnPinIconBtnPressed(class UMapWidget_PinIconBtn_C* InPressedIcon);
	void Destruct();
	void PinIconPressed(class UMapWidget_PinIconBtn_C* InPressedIcon);
	void Construct();
	void SetPinIconEnable(EMapPinType InPinType, bool IsEnable);
	void SetAllPinIconEnable(bool IsEnable, bool InIncludeEraser);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_PinIconList_C">();
	}
	static class UMapWidget_PinIconList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_PinIconList_C>();
	}
};
static_assert(alignof(UMapWidget_PinIconList_C) == 0x000008, "Wrong alignment on UMapWidget_PinIconList_C");
static_assert(sizeof(UMapWidget_PinIconList_C) == 0x0002B0, "Wrong size on UMapWidget_PinIconList_C");
static_assert(offsetof(UMapWidget_PinIconList_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_PinIconList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_PinIconList_C, HorizontalBox_0) == 0x000280, "Member 'UMapWidget_PinIconList_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_PinIconList_C, OnPinIconSelected) == 0x000288, "Member 'UMapWidget_PinIconList_C::OnPinIconSelected' has a wrong offset!");
static_assert(offsetof(UMapWidget_PinIconList_C, PinCnt) == 0x000298, "Member 'UMapWidget_PinIconList_C::PinCnt' has a wrong offset!");
static_assert(offsetof(UMapWidget_PinIconList_C, HorizontalBoxChildsForDelete) == 0x0002A0, "Member 'UMapWidget_PinIconList_C::HorizontalBoxChildsForDelete' has a wrong offset!");

}

