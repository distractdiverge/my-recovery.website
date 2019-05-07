[%mui.withStyles
    "Styles"({
        container:
            ReactDOMRe.Style.make(
                ~width="100%",
                ~height="100%",
                ~maxWidth="970px",
                margin="30px auto",
                (),
            ),
    })
];

let theme =
    MaterialUi_Theme.create(
        MaterialUi_ThemeOptions.(
            make(~typography=Typography.make(~useNextVariants=true, ()), ())
        )
    )

let component = ReasonReact.statelessComponent(__MODULE__);

let make = _children => {
    ...component,
    render: _self =>
        <Styles>
            ...MaterialUi.(
                classes =>
                    <ThemeProvider theme>
                        <div className={classes.container}>
                            <CssBaseline />
                        </div>
                    </ThemeProvider>
            )
        </Styles>
}