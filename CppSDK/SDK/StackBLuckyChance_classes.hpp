#pragma once

 

// Package: StackBLuckyChance

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBLuckyChance.StackBLuckyChance_C
// 0x0148 (0x03C0 - 0x0278)
class UStackBLuckyChance_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Sizegroup;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_lc;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_LuckyChanveNum;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_mount;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           Info_Data;                                         // 0x02A0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         BoxWidth;                                          // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TxtCcoloer;                                        // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ChangeColor;                                       // 0x03BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_StackBLuckyChance(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetData(const struct FOwnItemInfo& InfoData);
	void SetLuckyChanceNum(int32 ChanceNum);
	void UpdateColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBLuckyChance_C">();
	}
	static class UStackBLuckyChance_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBLuckyChance_C>();
	}
};
static_assert(alignof(UStackBLuckyChance_C) == 0x000008, "Wrong alignment on UStackBLuckyChance_C");
static_assert(sizeof(UStackBLuckyChance_C) == 0x0003C0, "Wrong size on UStackBLuckyChance_C");
static_assert(offsetof(UStackBLuckyChance_C, UberGraphFrame) == 0x000278, "Member 'UStackBLuckyChance_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBLuckyChance_C, Sizegroup) == 0x000280, "Member 'UStackBLuckyChance_C::Sizegroup' has a wrong offset!");
static_assert(offsetof(UStackBLuckyChance_C, Txt_lc) == 0x000288, "Member 'UStackBLuckyChance_C::Txt_lc' has a wrong offset!");
static_assert(offsetof(UStackBLuckyChance_C, Txt_LuckyChanveNum) == 0x000290, "Member 'UStackBLuckyChance_C::Txt_LuckyChanveNum' has a wrong offset!");
static_assert(offsetof(UStackBLuckyChance_C, Txt_mount) == 0x000298, "Member 'UStackBLuckyChance_C::Txt_mount' has a wrong offset!");
static_assert(offsetof(UStackBLuckyChance_C, Info_Data) == 0x0002A0, "Member 'UStackBLuckyChance_C::Info_Data' has a wrong offset!");
static_assert(offsetof(UStackBLuckyChance_C, BoxWidth) == 0x0003B8, "Member 'UStackBLuckyChance_C::BoxWidth' has a wrong offset!");
static_assert(offsetof(UStackBLuckyChance_C, TxtCcoloer) == 0x0003BC, "Member 'UStackBLuckyChance_C::TxtCcoloer' has a wrong offset!");
static_assert(offsetof(UStackBLuckyChance_C, ChangeColor) == 0x0003BD, "Member 'UStackBLuckyChance_C::ChangeColor' has a wrong offset!");

}

