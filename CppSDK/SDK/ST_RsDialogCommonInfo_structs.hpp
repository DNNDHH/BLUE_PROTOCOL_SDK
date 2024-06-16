#pragma once

 

// Package: ST_RsDialogCommonInfo

#include "Basic.hpp"

#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogPaymentType_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_RsDialogCommonInfo.ST_RsDialogCommonInfo
// 0x0048 (0x0048 - 0x0000)
struct FST_RsDialogCommonInfo final
{
public:
	ERsDialogProductTitleType                     ProductTitleType_4_43DA6C6B46C9EA9DCDE30C8C74715D97; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_552D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId_30_DFD3F9D64927B3FBC04B74A161F5F13B;     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName_8_6A83C7084CAC5330720C85898270750B;    // 0x0008(0x0018)(Edit, BlueprintVisible)
	int32                                         RankFrom_11_FC9689804C4DE1BF878D7CBD00F6A399;      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankTo_13_776E35F84B8E5194B9541482654ECA89;        // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowPurchaseNum_22_DFDC3704404F04442BA8B0B4552CE3E9; // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_552E[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchaseNum_15_0D91F9BF4D1CC3935D95A1B2A9C43592;   // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          PaymentType01_25_2736491E4EC00F5E4318E895C5221FAF; // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_552F[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice01_17_00B53D1B407A0990DFC1089945EA5FF2; // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogPaymentType                          PaymentType02_27_933376CB4303D49349EB869BA852ECD5; // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5530[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PurchasePrice02_19_D68AB5B24BED8B211C98A283AA78AD7E; // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PaidOnly_32_2321B9294C2AFD05841E2DB8A68DB31C;      // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FST_RsDialogCommonInfo) == 0x000008, "Wrong alignment on FST_RsDialogCommonInfo");
static_assert(sizeof(FST_RsDialogCommonInfo) == 0x000048, "Wrong size on FST_RsDialogCommonInfo");
static_assert(offsetof(FST_RsDialogCommonInfo, ProductTitleType_4_43DA6C6B46C9EA9DCDE30C8C74715D97) == 0x000000, "Member 'FST_RsDialogCommonInfo::ProductTitleType_4_43DA6C6B46C9EA9DCDE30C8C74715D97' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, ItemSetId_30_DFD3F9D64927B3FBC04B74A161F5F13B) == 0x000004, "Member 'FST_RsDialogCommonInfo::ItemSetId_30_DFD3F9D64927B3FBC04B74A161F5F13B' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, ProductName_8_6A83C7084CAC5330720C85898270750B) == 0x000008, "Member 'FST_RsDialogCommonInfo::ProductName_8_6A83C7084CAC5330720C85898270750B' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, RankFrom_11_FC9689804C4DE1BF878D7CBD00F6A399) == 0x000020, "Member 'FST_RsDialogCommonInfo::RankFrom_11_FC9689804C4DE1BF878D7CBD00F6A399' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, RankTo_13_776E35F84B8E5194B9541482654ECA89) == 0x000024, "Member 'FST_RsDialogCommonInfo::RankTo_13_776E35F84B8E5194B9541482654ECA89' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, ShowPurchaseNum_22_DFDC3704404F04442BA8B0B4552CE3E9) == 0x000028, "Member 'FST_RsDialogCommonInfo::ShowPurchaseNum_22_DFDC3704404F04442BA8B0B4552CE3E9' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, PurchaseNum_15_0D91F9BF4D1CC3935D95A1B2A9C43592) == 0x00002C, "Member 'FST_RsDialogCommonInfo::PurchaseNum_15_0D91F9BF4D1CC3935D95A1B2A9C43592' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, PaymentType01_25_2736491E4EC00F5E4318E895C5221FAF) == 0x000030, "Member 'FST_RsDialogCommonInfo::PaymentType01_25_2736491E4EC00F5E4318E895C5221FAF' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, PurchasePrice01_17_00B53D1B407A0990DFC1089945EA5FF2) == 0x000034, "Member 'FST_RsDialogCommonInfo::PurchasePrice01_17_00B53D1B407A0990DFC1089945EA5FF2' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, PaymentType02_27_933376CB4303D49349EB869BA852ECD5) == 0x000038, "Member 'FST_RsDialogCommonInfo::PaymentType02_27_933376CB4303D49349EB869BA852ECD5' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, PurchasePrice02_19_D68AB5B24BED8B211C98A283AA78AD7E) == 0x00003C, "Member 'FST_RsDialogCommonInfo::PurchasePrice02_19_D68AB5B24BED8B211C98A283AA78AD7E' has a wrong offset!");
static_assert(offsetof(FST_RsDialogCommonInfo, PaidOnly_32_2321B9294C2AFD05841E2DB8A68DB31C) == 0x000040, "Member 'FST_RsDialogCommonInfo::PaidOnly_32_2321B9294C2AFD05841E2DB8A68DB31C' has a wrong offset!");

}

