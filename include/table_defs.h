#ifndef table_defs_h
#define table_defs_h

// Table definitions
table_def_t table_definitions[] = {
    {
        name: "0_debtor_trans",
        null_maps: {
            bitmaps: {
                {0x00, 0x00, 0x00, 0x00, 0x00},
                {0x03, 0xCE, 0x7C, 0x09, 0xCF},
                {0x03, 0xCE, 0x7C, 0x01, 0xCF},
                {0x03, 0xC6, 0x7C, 0x01, 0xCF},
                {0x03, 0xC6, 0x7C, 0x01, 0xCD},
                {0x03, 0xCE, 0x7C, 0x01, 0xCD},
                {0x01, 0xCE, 0x7C, 0x01, 0xCF},
                {0x01, 0xC6, 0x78, 0x01, 0xCF},
                {0x03, 0xC6, 0x78, 0x01, 0xCF},
                {0x03, 0xCE, 0x78, 0x01, 0xCF},
                {0x01, 0xC6, 0x7C, 0x01, 0xCF},
                {0x01, 0xCE, 0x78, 0x01, 0xCF},
                {0x03, 0xCE, 0x78, 0x01, 0xCD},
                {0x03, 0xC6, 0x78, 0x01, 0xCD},
                {0x01, 0xCE, 0x78, 0x01, 0xCD},
                {0x01, 0xC6, 0x78, 0x01, 0xCD},
                {0x07, 0xCE, 0x7F, 0xFF, 0xEF},
                {0x01, 0xC6, 0x7C, 0x01, 0xCD},
                {0x01, 0xCE, 0x7C, 0x01, 0xCD},
                {0x03, 0xC6, 0x7C, 0x01, 0xCE},
                {0x03, 0xCE, 0x7C, 0x01, 0xCE},
                {0x03, 0xC6, 0x7C, 0x01, 0x4F},
                {0x01, 0xC6, 0x78, 0x01, 0x4F},
                {0x01, 0xC6, 0x7C, 0x01, 0x4F},
                {0x03, 0xC6, 0x78, 0x01, 0x4F},
                {0x01, 0xC6, 0x7C, 0x01, 0x0F},
                {0x01, 0xC6, 0x78, 0x01, 0x0F},
                {0x03, 0xCE, 0x7C, 0x00, 0x0F},
                {0x03, 0xCE, 0x7C, 0x00, 0x4F},
                {0x03, 0xC6, 0x7C, 0x01, 0x07}
            },
            count: 30
        },
        lens_maps: {
            lens: {
                {0x00, 0x00},
                {0x0C, 0x09},
                {0x0C, 0x04},
                {0x00, 0x09},
            },
            count: 4
        },
        {
            { /* bigint(20) */
                name: "id",
                type: FT_INT,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: 1,
                    int_max_val: 234650
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /*  */
                name: "DB_TRX_ID",
                type: FT_INTERNAL,
                fixed_length: 6,

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /*  */
                name: "DB_ROLL_PTR",
                type: FT_INTERNAL,
                fixed_length: 7,

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) unsigned */
                name: "trans_no",
                type: FT_UINT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    uint_min_val: 1,
                    uint_max_val: 85500
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* smallint(6) unsigned */
                name: "type",
                type: FT_UINT,
                fixed_length: 2,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    uint_min_val: 0,
                    uint_max_val: 13
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* bigint(20) */
                name: "service_req_id",
                type: FT_INT,
                fixed_length: 8,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: 1,
                    int_max_val: 500
                },

                can_be_null: TRUE,
                likely_null: VERY_LIKELY
            },
            { /* tinyint(1) unsigned */
                name: "version",
                type: FT_UINT,
                fixed_length: 1,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    uint_min_val: 0,
                    uint_max_val: 30
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) unsigned */
                name: "debtor_no",
                type: FT_UINT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    uint_min_val: 1,
                    uint_max_val: 21000
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) */
                name: "salesman_id",
                type: FT_INT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: -1,
                    int_max_val: 1
                },

                can_be_null: TRUE,
                likely_null: VERY_LIKELY
            },
            { /* bigint(20) */
                name: "mistook_staff_id",
                type: FT_INT,
                fixed_length: 8,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: 0,
                    int_max_val: 0
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* int(11) */
                name: "branch_code",
                type: FT_INT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: 1,
                    int_max_val: 50000
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* bigint(20) */
                name: "contract_id",
                type: FT_INT,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: 0,
                    int_max_val: 0
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* date */
                name: "tran_date",
                type: FT_DATE,
                fixed_length: 3,

                can_be_null: TRUE,
                likely_null: NEVER
            },
            { /* date */
                name: "due_date",
                type: FT_DATE,
                fixed_length: 3,

                can_be_null: TRUE,
                likely_null: VERY_LIKELY
            },
            { /* date */
                name: "period_from",
                type: FT_DATE,
                fixed_length: 3,

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* date */
                name: "period_till",
                type: FT_DATE,
                fixed_length: 3,

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* timestamp */
                name: "created_at",
                type: FT_TIMESTAMP,
                fixed_length: 4,

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* varchar(60) */
                name: "reference",
                type: FT_CHAR,
                min_length: 0,
                max_length: 60,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    char_min_len: 0,
                    char_max_len: 9,
                    char_ascii_only: TRUE
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) */
                name: "credit_inv_no",
                type: FT_INT,
                fixed_length: 4,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: 0,
                    int_max_val: 90000
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* varchar(255) */
                name: "barcode",
                type: FT_CHAR,
                min_length: 0,
                max_length: 255,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 12,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_UNLIKELY
            },
            { /* int(11) */
                name: "tpe",
                type: FT_INT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: 0,
                    int_max_val: 2
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) */
                name: "order_",
                type: FT_INT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: 0,
                    int_max_val: 87000
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "ov_amount",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: -20000,
                    double_max_val: 400000
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "ov_gst",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: 0,
                    double_max_val: 3500
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "ov_freight",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: 0,
                    double_max_val: 0
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "ov_freight_tax",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: 0,
                    double_max_val: 0
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "ov_discount",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: 0,
                    double_max_val: 10
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* decimal(8,2) */
                name: "commission",
                type: FT_DECIMAL,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    decimal_min_val: 0,
                    decimal_max_val: 10000
                },

                decimal_precision: 8,
                decimal_digits: 2,
                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "processing_fee",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: 0,
                    double_max_val: 0
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* decimal(14,2) */
                name: "inc_ov_gst",
                type: FT_DECIMAL,
                fixed_length: 7,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    decimal_min_val: 0,
                    decimal_max_val: 30000
                },

                decimal_precision: 14,
                decimal_digits: 2,
                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* tinyint(1) */
                name: "discount_taxed",
                type: FT_INT,
                fixed_length: 1,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: 0,
                    int_max_val: 1
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "alloc",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: 0,
                    double_max_val: 400000
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "prep_amount",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: 0,
                    double_max_val: 0
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "round_of_amount",
                type: FT_DOUBLE,
                fixed_length: 8,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: -50,
                    double_max_val: 50
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* decimal(18,2) */
                name: "credit_note_charge",
                type: FT_DECIMAL,
                fixed_length: 9,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    decimal_min_val: 0,
                    decimal_max_val: 0
                },

                decimal_precision: 18,
                decimal_digits: 2,
                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* decimal(14,2) */
                name: "credit_note_charge_tax",
                type: FT_DECIMAL,
                fixed_length: 7,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    decimal_min_val: 0,
                    decimal_max_val: 0
                },

                decimal_precision: 14,
                decimal_digits: 2,
                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* decimal(14,2) */
                name: "income_recovered",
                type: FT_DECIMAL,
                fixed_length: 7,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    decimal_min_val: 0,
                    decimal_max_val: 0
                },

                decimal_precision: 14,
                decimal_digits: 2,
                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* decimal(14,2) */
                name: "income_recovered_tax",
                type: FT_DECIMAL,
                fixed_length: 7,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    decimal_min_val: 0,
                    decimal_max_val: 0
                },

                decimal_precision: 14,
                decimal_digits: 2,
                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* decimal(6,2) */
                name: "days_income_recovered_for",
                type: FT_DECIMAL,
                fixed_length: 3,
                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    decimal_min_val: 0,
                    decimal_max_val: 0
                },
                decimal_precision: 6,
                decimal_digits: 2,
                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* double */
                name: "rate",
                type: FT_DOUBLE,
                fixed_length: 8,
                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    double_min_val: 1,
                    double_max_val: 1
                },
                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) */
                name: "ship_via",
                type: FT_INT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: 0,
                    int_max_val: 1
                },

                can_be_null: TRUE,
                likely_null: VERY_LIKELY
            },
            { /* int(11) */
                name: "dimension_id",
                type: FT_INT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: 0,
                    int_max_val: 30
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) */
                name: "dimension2_id",
                type: FT_INT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: 0,
                    int_max_val: 0
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) */
                name: "payment_terms",
                type: FT_INT,
                fixed_length: 4,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: 4,
                    int_max_val: 4
                },

                can_be_null: TRUE,
                likely_null: UNLIKELY
            },
            { /* tinyint(1) unsigned */
                name: "tax_included",
                type: FT_UINT,
                fixed_length: 1,

                has_limits: TRUE,
                limits: {
                    can_be_null: FALSE,
                    uint_min_val: 0,
                    uint_max_val: 1
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* longtext */
                name: "display_customer",
                type: FT_TEXT,
                min_length: 0,
                max_length: 4294967295,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 4294967295,
                    char_ascii_only: FALSE
                },

                can_be_null: TRUE,
                likely_null: VERY_UNLIKELY
            },
            { /* varchar(80) */
                name: "contact_person",
                type: FT_CHAR,
                min_length: 0,
                max_length: 240,

                has_limits: FALSE,
                limits: {
                    can_be_null: FALSE,
                    char_min_len: 0,
                    char_max_len: 240,
                    char_ascii_only: TRUE
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* varchar(255) */
                name: "customer_trn",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_UNLIKELY
            },
            { /* varchar(255) */
                name: "customer_mobile",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_UNLIKELY
            },
            { /* varchar(255) */
                name: "customer_email",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_UNLIKELY
            },
            { /* varchar(255) */
                name: "customer_ref",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_UNLIKELY
            },
            { /* longtext */
                name: "narrations",
                type: FT_TEXT,
                min_length: 0,
                max_length: 4294967295,

                has_limits: FALSE,
                limits: {
                    can_be_null: FALSE,
                    char_min_len: 0,
                    char_max_len: 4294967295,
                    char_ascii_only: TRUE
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* varchar(255) */
                name: "payment_method",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_UNLIKELY
            },
            { /* varchar(255) */
                name: "payment_account",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_LIKELY
            },
            { /* varchar(35) */
                name: "payment_ref",
                type: FT_CHAR,
                min_length: 0,
                max_length: 105,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 105,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* varchar(255) */
                name: "govt_fee_pay_method",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 0,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* varchar(255) */
                name: "govt_fee_pay_account",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: TRUE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 0,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* double */
                name: "credit_card_charge",
                type: FT_DOUBLE,
                fixed_length: 8,

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* char(4) */
                name: "credit_card_no",
                type: FT_CHAR,
                min_length: 0,
                max_length: 12,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 12,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* int(11) */
                name: "show_bank_charge",
                type: FT_INT,
                fixed_length: 4,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: -2147483648LL,
                    int_max_val: 2147483647LL
                },

                can_be_null: TRUE,
                likely_null: NEVER
            },
            { /* int(11) */
                name: "payment_flag",
                type: FT_INT,
                fixed_length: 4,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: -2147483648LL,
                    int_max_val: 2147483647LL
                },

                can_be_null: TRUE,
                likely_null: NEVER
            },
            { /* varchar(255) */
                name: "cust_emp_id",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* varchar(255) */
                name: "cust_emp_name",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* varchar(255) */
                name: "invoice_type",
                type: FT_CHAR,
                min_length: 0,
                max_length: 765,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 765,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_LIKELY
            },
            { /* double */
                name: "inv_total",
                type: FT_DOUBLE,
                fixed_length: 8,

                can_be_null: TRUE,
                likely_null: NEVER
            },
            { /* double */
                name: "customer_card_amount",
                type: FT_DOUBLE,
                fixed_length: 8,

                can_be_null: TRUE,
                likely_null: NEVER
            },
            { /* bigint(20) */
                name: "created_by",
                type: FT_INT,
                fixed_length: 8,

                has_limits: FALSE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: -9223372036854775806LL,
                    int_max_val: 9223372036854775807LL
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* int(11) */
                name: "payment_type",
                type: FT_INT,
                fixed_length: 4,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    int_min_val: -2147483648LL,
                    int_max_val: 2147483647LL
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* varchar(50) */
                name: "cheq_no",
                type: FT_CHAR,
                min_length: 0,
                max_length: 150,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 150,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* date */
                name: "cheq_date",
                type: FT_DATE,
                fixed_length: 3,

                can_be_null: TRUE,
                likely_null: ALWAYS
            },
            { /* varchar(50) */
                name: "token_number",
                type: FT_CHAR,
                min_length: 0,
                max_length: 150,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 150,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_LIKELY
            },
            { /* bigint(20) */
                name: "updated_by",
                type: FT_INT,
                fixed_length: 8,

                has_limits: FALSE,
                limits: {
                    can_be_null: FALSE,
                    int_min_val: -9223372036854775806LL,
                    int_max_val: 9223372036854775807LL
                },

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* datetime */
                name: "transacted_at",
                type: FT_DATETIME,
                fixed_length: 8,

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* datetime */
                name: "updated_at",
                type: FT_DATETIME,
                fixed_length: 8,

                can_be_null: FALSE,
                likely_null: NEVER
            },
            { /* varchar(50) */
                name: "auth_code",
                type: FT_CHAR,
                min_length: 0,
                max_length: 150,

                has_limits: FALSE,
                limits: {
                    can_be_null: TRUE,
                    char_min_len: 0,
                    char_max_len: 150,
                    char_ascii_only: TRUE
                },

                can_be_null: TRUE,
                likely_null: VERY_UNLIKELY
            },
            { type: FT_NONE }
        }
    },
};

#endif
