#pragma once

 

// Package: MyCharaMenu_Other

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_Other.MyCharaMenu_Other_C
// 0x0020 (0x02D0 - 0x02B0)
class UMyCharaMenu_Other_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VB_Active;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_NonActive;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ActiveItemCnt;                                     // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_Other(int32 EntryPoint);
	void Update();
	void Construct();
	void UpdateActiveOutGameBuff();
	void UpdateActiveNetCafeBuff();
	void CreateStockOutGameBuff();
	class FText GetBuffValue(int32 BaseValue, bool IsRate, const EOutGameBuffType InBuffType);
	void TryGetActiveListItem(class UEffect_Other_C** Item);
	void FixActiveList();
	void UpdateFreeBuff();
	void Get_Free_Buff_Text(ESBFreeBuffPointType Type, class FString* Text, struct FSBStatusAlimentConfig* Out_Row);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_Other_C">();
	}
	static class UMyCharaMenu_Other_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_Other_C>();
	}
};
static_assert(alignof(UMyCharaMenu_Other_C) == 0x000008, "Wrong alignment on UMyCharaMenu_Other_C");
static_assert(sizeof(UMyCharaMenu_Other_C) == 0x0002D0, "Wrong size on UMyCharaMenu_Other_C");
static_assert(offsetof(UMyCharaMenu_Other_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_Other_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Other_C, VB_Active) == 0x0002B8, "Member 'UMyCharaMenu_Other_C::VB_Active' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Other_C, VB_NonActive) == 0x0002C0, "Member 'UMyCharaMenu_Other_C::VB_NonActive' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Other_C, ActiveItemCnt) == 0x0002C8, "Member 'UMyCharaMenu_Other_C::ActiveItemCnt' has a wrong offset!");

}

