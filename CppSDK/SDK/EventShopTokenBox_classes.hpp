#pragma once

 

// Package: EventShopTokenBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopTokenBox.EventShopTokenBox_C
// 0x0058 (0x02D0 - 0x0278)
class UEventShopTokenBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEventShopTokenBox_Item_C*              Token_001;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTokenBox_Item_C*              Token_002;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTokenBox_Item_C*              Token_003;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTokenBox_Item_C*              Token_004;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTokenBox_Item_C*              Token_005;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTokenBox_Item_C*              Token_006;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                 TokenIdList;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UEventShopTokenBox_Item_C*>      Bp_Token_List;                                     // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_EventShopTokenBox(int32 EntryPoint);
	void Construct();
	void Init();
	void Set_Token_Num(int32 Num);
	void SetTokenList(TArray<int32>& TokenList);
	void ResetAmount();
	void SetTokenAmount(int32 TokenID, int32 Amount);
	void GetAmount(int32 TokenID, int32* Amount);
	void CheckCostOver(int32 ListId, int32 Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopTokenBox_C">();
	}
	static class UEventShopTokenBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopTokenBox_C>();
	}
};
static_assert(alignof(UEventShopTokenBox_C) == 0x000008, "Wrong alignment on UEventShopTokenBox_C");
static_assert(sizeof(UEventShopTokenBox_C) == 0x0002D0, "Wrong size on UEventShopTokenBox_C");
static_assert(offsetof(UEventShopTokenBox_C, UberGraphFrame) == 0x000278, "Member 'UEventShopTokenBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_C, Token_001) == 0x000280, "Member 'UEventShopTokenBox_C::Token_001' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_C, Token_002) == 0x000288, "Member 'UEventShopTokenBox_C::Token_002' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_C, Token_003) == 0x000290, "Member 'UEventShopTokenBox_C::Token_003' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_C, Token_004) == 0x000298, "Member 'UEventShopTokenBox_C::Token_004' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_C, Token_005) == 0x0002A0, "Member 'UEventShopTokenBox_C::Token_005' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_C, Token_006) == 0x0002A8, "Member 'UEventShopTokenBox_C::Token_006' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_C, TokenIdList) == 0x0002B0, "Member 'UEventShopTokenBox_C::TokenIdList' has a wrong offset!");
static_assert(offsetof(UEventShopTokenBox_C, Bp_Token_List) == 0x0002C0, "Member 'UEventShopTokenBox_C::Bp_Token_List' has a wrong offset!");

}

