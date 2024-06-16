#pragma once

 

// Package: SkillComboTreeRuntime

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct SkillComboTreeRuntime.SCTActionTable
// 0x0018 (0x0020 - 0x0008)
struct FSCTActionTable : public FTableRowBase
{
public:
	TArray<class FName>                           BeforeStance;                                      // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FName                                   AfterStance;                                       // 0x0018(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSCTActionTable) == 0x000008, "Wrong alignment on FSCTActionTable");
static_assert(sizeof(FSCTActionTable) == 0x000020, "Wrong size on FSCTActionTable");
static_assert(offsetof(FSCTActionTable, BeforeStance) == 0x000008, "Member 'FSCTActionTable::BeforeStance' has a wrong offset!");
static_assert(offsetof(FSCTActionTable, AfterStance) == 0x000018, "Member 'FSCTActionTable::AfterStance' has a wrong offset!");

// ScriptStruct SkillComboTreeRuntime.SCTComboOnlySkill
// 0x0018 (0x0018 - 0x0000)
struct FSCTComboOnlySkill final
{
public:
	class FName                                   StanceName;                                        // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           ComboOnlyCommand;                                  // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSCTComboOnlySkill) == 0x000008, "Wrong alignment on FSCTComboOnlySkill");
static_assert(sizeof(FSCTComboOnlySkill) == 0x000018, "Wrong size on FSCTComboOnlySkill");
static_assert(offsetof(FSCTComboOnlySkill, StanceName) == 0x000000, "Member 'FSCTComboOnlySkill::StanceName' has a wrong offset!");
static_assert(offsetof(FSCTComboOnlySkill, ComboOnlyCommand) == 0x000008, "Member 'FSCTComboOnlySkill::ComboOnlyCommand' has a wrong offset!");

// ScriptStruct SkillComboTreeRuntime.SCTProbabilityRange
// 0x0008 (0x0008 - 0x0000)
struct FSCTProbabilityRange final
{
public:
	float                                         Lower;                                             // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Upper;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSCTProbabilityRange) == 0x000004, "Wrong alignment on FSCTProbabilityRange");
static_assert(sizeof(FSCTProbabilityRange) == 0x000008, "Wrong size on FSCTProbabilityRange");
static_assert(offsetof(FSCTProbabilityRange, Lower) == 0x000000, "Member 'FSCTProbabilityRange::Lower' has a wrong offset!");
static_assert(offsetof(FSCTProbabilityRange, Upper) == 0x000004, "Member 'FSCTProbabilityRange::Upper' has a wrong offset!");

}

