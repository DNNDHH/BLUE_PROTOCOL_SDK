#pragma once

 

// Package: PlayerProfileClassListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerProfileClassListItem.PlayerProfileClassListItem_C
// 0x0030 (0x02A8 - 0x0278)
class UPlayerProfileClassListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClassIconL_C*                          IconClass;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_28;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_900C[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Lv;                                                // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerProfileClassListItem(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetLv(int32 Param_Lv);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerProfileClassListItem_C">();
	}
	static class UPlayerProfileClassListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerProfileClassListItem_C>();
	}
};
static_assert(alignof(UPlayerProfileClassListItem_C) == 0x000008, "Wrong alignment on UPlayerProfileClassListItem_C");
static_assert(sizeof(UPlayerProfileClassListItem_C) == 0x0002A8, "Wrong size on UPlayerProfileClassListItem_C");
static_assert(offsetof(UPlayerProfileClassListItem_C, UberGraphFrame) == 0x000278, "Member 'UPlayerProfileClassListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassListItem_C, IconClass) == 0x000280, "Member 'UPlayerProfileClassListItem_C::IconClass' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassListItem_C, Image_28) == 0x000288, "Member 'UPlayerProfileClassListItem_C::Image_28' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassListItem_C, TxtLv) == 0x000290, "Member 'UPlayerProfileClassListItem_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassListItem_C, TxtName) == 0x000298, "Member 'UPlayerProfileClassListItem_C::TxtName' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassListItem_C, ClassType) == 0x0002A0, "Member 'UPlayerProfileClassListItem_C::ClassType' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassListItem_C, Lv) == 0x0002A4, "Member 'UPlayerProfileClassListItem_C::Lv' has a wrong offset!");

}

