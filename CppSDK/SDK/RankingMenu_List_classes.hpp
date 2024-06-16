#pragma once

 

// Package: RankingMenu_List

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankingMenu_List.RankingMenu_List_C
// 0x0048 (0x02C0 - 0x0278)
class URankingMenu_List_C final : public UUserWidget
{
public:
	class UVerticalBox*                           ItemList;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingMenu_Player_C*                  RankingMenu_Player;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingMenu_Player_C*                  RankingMenu_Player_1;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingMenu_Player_C*                  RankingMenu_Player_2;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingMenu_Player_C*                  RankingMenu_Player_28;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_20;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FRankingData>                   RankingList;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsTimeAttack;                                      // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9087[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyIndex;                                           // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Set_Solo_Ranking_List(TArray<struct FRankingData>& InRankingList, ESBClassType InClassType, int32 InLastIndex, bool InIsTimeAttack, bool* Active);
	void ChangePageSoloRankingList(int32 TopIndex, int32 MaxNum, ESBClassType ClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankingMenu_List_C">();
	}
	static class URankingMenu_List_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankingMenu_List_C>();
	}
};
static_assert(alignof(URankingMenu_List_C) == 0x000008, "Wrong alignment on URankingMenu_List_C");
static_assert(sizeof(URankingMenu_List_C) == 0x0002C0, "Wrong size on URankingMenu_List_C");
static_assert(offsetof(URankingMenu_List_C, ItemList) == 0x000278, "Member 'URankingMenu_List_C::ItemList' has a wrong offset!");
static_assert(offsetof(URankingMenu_List_C, RankingMenu_Player) == 0x000280, "Member 'URankingMenu_List_C::RankingMenu_Player' has a wrong offset!");
static_assert(offsetof(URankingMenu_List_C, RankingMenu_Player_1) == 0x000288, "Member 'URankingMenu_List_C::RankingMenu_Player_1' has a wrong offset!");
static_assert(offsetof(URankingMenu_List_C, RankingMenu_Player_2) == 0x000290, "Member 'URankingMenu_List_C::RankingMenu_Player_2' has a wrong offset!");
static_assert(offsetof(URankingMenu_List_C, RankingMenu_Player_28) == 0x000298, "Member 'URankingMenu_List_C::RankingMenu_Player_28' has a wrong offset!");
static_assert(offsetof(URankingMenu_List_C, ScrollBox_20) == 0x0002A0, "Member 'URankingMenu_List_C::ScrollBox_20' has a wrong offset!");
static_assert(offsetof(URankingMenu_List_C, RankingList) == 0x0002A8, "Member 'URankingMenu_List_C::RankingList' has a wrong offset!");
static_assert(offsetof(URankingMenu_List_C, IsTimeAttack) == 0x0002B8, "Member 'URankingMenu_List_C::IsTimeAttack' has a wrong offset!");
static_assert(offsetof(URankingMenu_List_C, MyIndex) == 0x0002BC, "Member 'URankingMenu_List_C::MyIndex' has a wrong offset!");

}

