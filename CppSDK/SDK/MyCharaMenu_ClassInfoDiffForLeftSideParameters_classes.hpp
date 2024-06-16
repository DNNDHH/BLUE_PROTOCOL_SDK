#pragma once

 

// Package: MyCharaMenu_ClassInfoDiffForLeftSideParameters

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_ClassInfoDiffForLeftSideParameters.MyCharaMenu_ClassInfoDiffForLeftSideParameters_C
// 0x0038 (0x02B0 - 0x0278)
class UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg01;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassLevelValueTxt;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LvGrp;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_525B[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ClassLevel;                                        // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BgWidth;                                           // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_ClassInfoDiffForLeftSideParameters(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetClassInfo(ESBClassType InClassType, int32 InClassLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_ClassInfoDiffForLeftSideParameters_C">();
	}
	static class UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C>();
	}
};
static_assert(alignof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C) == 0x000008, "Wrong alignment on UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C");
static_assert(sizeof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C) == 0x0002B0, "Wrong size on UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C");
static_assert(offsetof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C, Bg01) == 0x000280, "Member 'UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::Bg01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C, ClassIcon) == 0x000288, "Member 'UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C, ClassLevelValueTxt) == 0x000290, "Member 'UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::ClassLevelValueTxt' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C, LvGrp) == 0x000298, "Member 'UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::LvGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C, ClassType) == 0x0002A0, "Member 'UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::ClassType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C, ClassLevel) == 0x0002A4, "Member 'UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::ClassLevel' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C, BgWidth) == 0x0002A8, "Member 'UMyCharaMenu_ClassInfoDiffForLeftSideParameters_C::BgWidth' has a wrong offset!");

}

