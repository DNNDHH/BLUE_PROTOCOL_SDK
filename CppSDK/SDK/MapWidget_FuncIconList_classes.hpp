#pragma once

 

// Package: MapWidget_FuncIconList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_FuncIconList.MapWidget_FuncIconList_C
// 0x0038 (0x02B0 - 0x0278)
class UMapWidget_FuncIconList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         FuncIconCnt;                                       // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7FD8[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFuncIconSelected;                                // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWidget*>                        HorizontalBoxChildsForDelete;                      // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnFuncIconSelected__DelegateSignature(EMapFuncIconType InSelectedFuncIconType);
	void ExecuteUbergraph_MapWidget_FuncIconList(int32 EntryPoint);
	void Destruct();
	void OnIconPressedEvent(class UMapWidget_FuncIconItem_C* InPressedIcon);
	void FuncIconPressed(class UMapWidget_FuncIconItem_C* InPressedIcon);
	void Construct();
	void SetFuncIconEnable(EMapFuncIconType InFuncIconType, bool IsEnable);
	void SetFuncIconVisibility(EMapFuncIconType InFuncIconType, bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_FuncIconList_C">();
	}
	static class UMapWidget_FuncIconList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_FuncIconList_C>();
	}
};
static_assert(alignof(UMapWidget_FuncIconList_C) == 0x000008, "Wrong alignment on UMapWidget_FuncIconList_C");
static_assert(sizeof(UMapWidget_FuncIconList_C) == 0x0002B0, "Wrong size on UMapWidget_FuncIconList_C");
static_assert(offsetof(UMapWidget_FuncIconList_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_FuncIconList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_FuncIconList_C, HorizontalBox_0) == 0x000280, "Member 'UMapWidget_FuncIconList_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_FuncIconList_C, FuncIconCnt) == 0x000288, "Member 'UMapWidget_FuncIconList_C::FuncIconCnt' has a wrong offset!");
static_assert(offsetof(UMapWidget_FuncIconList_C, OnFuncIconSelected) == 0x000290, "Member 'UMapWidget_FuncIconList_C::OnFuncIconSelected' has a wrong offset!");
static_assert(offsetof(UMapWidget_FuncIconList_C, HorizontalBoxChildsForDelete) == 0x0002A0, "Member 'UMapWidget_FuncIconList_C::HorizontalBoxChildsForDelete' has a wrong offset!");

}

